PROJECT = templates

TESTPROJECT = test-$(PROJECT)

CXX = g++

CXXFLAGS = -I. -std=c++17 -Werror -Wall -Wpedantic -g -fPIC

TESTCXXFLAGS = $(CXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS = $(wildcard *.h)

TEST-OBJ = test.o

.PHONY: default

default: all

%.o: %.cpp
	$(CXX) -c -o $@ $^ $(CXXFLAGS)

$(PROJECT): main.o
	$(CXX) -o $@ main.o $(CXXFLAGS)

$(TESTPROJECT): $(TEST-OBJ) $(PROJECT)
	$(CXX) -o $@ $^ $(TESTCXXFLAGS)

all: $(PROJECT)

test: $(TESTPROJECT)

clean:
	rm -f *.o
	rm -f $(PROJECT)
	rm -f $(TESTPROJECT)
