#include <iostream>
#include "hello.hpp"

using namespace std;

int main() {
    hello();
    string name = "";
    do {
	cin >> name;
	if (name != "stop") {
	    cout << "Hello, " << name << "!" << endl;
	}
    } while (name != "stop");
}
