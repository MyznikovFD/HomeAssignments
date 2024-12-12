PROJECT=transf

CXX=g++

CFLAGS=-Werror -Wpedantic -Wall

DEPS=Transformer.h Decepticon.h Autobot.h GodMaster.h

OBJ=Transformer.o Decepticon.o Autobot.o GodMaster.o Engine.o Guns.o testEngineGuns.o testTransformer.o testDecepticon.o testAutobot.o testGodMaster.o testEngineGuns.o main.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)


$(PROJECT): $(OBJ)
	$(CXX)  $^ -o $(PROJECT) -lgtest -lgmock -pthread


clean:
	rm -f *.o *.gch transf
