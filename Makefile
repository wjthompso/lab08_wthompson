CXX = g++
#CXX = clang++

CXXFLAGS = -Wall -Wno-uninitialized

BINARIES= allTests.o strFuncs.o tddFuncs.o linkedListFuncs.o recLinkedListFuncs.o

all: ${BINARIES} 
	$(CXX) $(CXXFLAGS) $(BINARIES) -o allTests

tests: ${BINARIES}
	make all; ./allTests

clean:
	/bin/rm -f ${BINARIES} *.o *.out allTests