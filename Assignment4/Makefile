PROJECT = transformer

LIBPROJECT = $(PROJECT).a

TESTPROJECT = test-$(PROJECT)

CXX = g++

	A = ar

AFLAGS = rsv

CCXFLAGS = -I. -std=c++17 -Werror -Wpedantic -Wall -g -fPIC

LDXXFLAGS = $(CCXFLAGS) -L. -l:$(LIBPROJECT)

LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS=$(wildcard *.h)

OBJ=Transformer.o Decepticon.o Autobot.o GodMaster.o Engine.o Guns.o

TEST-OBJ=testTransformer.o testDecepticon.o testAutobot.o testGodMaster.o testEngineGuns.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)


$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

test: $(TESTPROJECT)

all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o
	rm -f $(PROJECT)
	rm -f $(TESTPROJECT)

cleanall: clean
	rm -f $(PROJECT)
	rm -f $(LIBPROJECT)
	rm -f $(TESTPROJECT)
