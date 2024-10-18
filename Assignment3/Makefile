CXX=g++
DEPS1=Transformer.h
DEPS2=Decepticon.h
DEPS3=Autobot.h

transf: Autobot.o Decepticon.o Transformer.o
	$(CXX) Autobot.o Decepticon.o Transformer.o -o transf;

Autobot.o: Autobot.cpp $(DEPS3)
	$(CXX) -c Autobot.cpp;
	
Decepticon.o: Decepticon.cpp $(DEPS2)
	$(CXX) -c Decepticon.cpp;

Transformer.o: Decepticon.o $(DEPS1)
	$(CXX) -c Transformer.cpp;

clean:
	rm -f *.o *.gch transf;

