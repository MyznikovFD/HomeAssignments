PROJECT=transf

CXX=g++

CFLAGS=-Werror -Wpedantic -Wall

DEPS=Transformer.h Decepticon.h Autobot.h GodMaster.h

OBJ=Transformer.o Decepticon.o Autobot.o  GodMaster.o

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CFLAGS)

$(PROJECT): $(OBJ)
	$(CXX)  $^ -o $(PROJECT)


clean:
	rm -f *.o *.gch transf
