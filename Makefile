all: hello.cpp main.cpp
	g++ main.cpp hello.cpp hello.hpp -o hello
clean:
	rm *.o *.gch hello.app

