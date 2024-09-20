all: hello.cpp main.cpp
	g++ main.cpp hello.cpp hello.hpp -o hello.app
clean:
	rm *.o *.gch hello.app

