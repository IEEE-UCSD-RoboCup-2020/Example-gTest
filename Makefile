CXX=g++
CXXFLAGS=-Wall -pedantic -O0 -g -std=c++11 
OUTFILES=HelloWorld HelloWorld_Test
SRCFILES=$(wildcard ./src/*.cpp) $(wildcard ./src/*.h)
TESTFILES=$(wildcard ./test/*.cpp)
BUILDDIR=build
TESTDIR=test
SRCDIR=src

VPATH=test:build:src:googletest/googletest/src

all: HelloWorld HelloWorld_Test

HelloWorld: $(SRCFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

HelloWorld_Test: $(SRCFILES) $(TESTFILES)
	$(CXX) -I./googletest/googletest/src $(CXXFLAGS) -o $@ $^


.PHONY: test
test:	HelloWorld_Test

.PHONY: clean
clean:
	rm -rf $(BUILDDIR)

	
	
