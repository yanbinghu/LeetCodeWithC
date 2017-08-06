CC = g++
testdir = gmock
LIBS = -L ./$(testdir)/lib/
LIBS+= -lgmock
CFLAGS =  -lpthread
INCLUDE= -I ./testcase/include/\
		-I ./leetcode/include/ \
		-I ./ 
LEETCODESRC  = $(wildcard ./leetcode/src/*.c)
LEETOBJ = $(patsubst %.c, %.o, $(LEETCODESRC))
TESTCASESRC = $(wildcard ./testcase/src/*.cpp)
CASEOBJ = $(patsubst %.cpp,%.o, $(TESTCASESRC))
MAINSRC = $(wildcard ./$(testdir)/main/*.cpp)
MAINOBJ =$(patsubst %.cpp,%.o, $(MAINSRC))

TARGET = main

.PHONY: all clean


all: $(TARGET)

$(TARGET): $(LEETOBJ) $(CASEOBJ) $(MAINOBJ)
	$(CC)  -o $@ $^  $(LIBS) $(CFLAGS) $(INCLUDE)
.c.o:$(LEETCODESRC)
	$(CC) -c $(INCLUDE) -o  $@ $< 

.cpp.o:$(TESTCASESRC) $(MAINOBJ)
	$(CC) -c  $(INCLUDE) -o $@ $<


SUBDIR = $(shell ls ./ -R | grep /)
SUBDIRS  = $(subst :,/,$(SUBDIR))
SOURCE = $(foreach dir, $(SUBDIRS),$(wildcard $(dir)*.o))
clean:
	-rm -rf *~ $(SOURCE) $(TARGET)
