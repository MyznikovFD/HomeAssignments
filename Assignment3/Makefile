CXX=g++
DEPS1=Transformer.h
DEPS2=Decepticon.h

transf: Decepticon.o Transformer.o
	$(CXX) Decepticon.o Transformer.o -o transf;
Decepticon.o: Decepticon.cpp $(DEPS1)
	$(CXX) -c Decepticon.cpp;

Transformer.o: Decepticon.o $(DEPS2)
	$(CXX) -c Transformer.cpp;

clean:
	rm -f *.o *.gch transf;

