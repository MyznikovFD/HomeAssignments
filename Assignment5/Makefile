PROJECT = virtTransf

CXX = g++

CXXFLAGS = -I. -std=c++17 -Werror -Wpedantic -Wall -g -fPIC

DEPS=$(wildcard *.h)

OBJ=Transformer.o Decepticon.o Autobot.o Engine.o Guns.o test.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $<

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $(OBJ) $(CXXFLAGS)


all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o
	rm -f $(PROJECT)
