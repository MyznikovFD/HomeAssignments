CXX=g++
DEPS=hello.hpp

hello: hello.o main.o
	$(CXX) hello.o main.o -o hello;

hello.o: hello.cpp $(DEPS)
	$(CXX) -c hello.cpp;

main.o: hello.o $(DEPS)
	$(CXX) -c main.cpp;

clean:
	rm -f *.o *.gch hello;

