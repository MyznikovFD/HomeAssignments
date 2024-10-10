#include <iostream>
#include <string>

int head = 0;
const int stackSize = 50;
double *stack = new double[stackSize];


void push(std::string s)
{
    double num = (double) atof(s.c_str());
    if (head > stackSize)
        std::cout << "ErrOr!! stack is overflowed!";
    else
        stack[head++] = num;
}

void opreation(char cOpr)
{

}



int main()
{
    unsigned char c;
    std::string in;
    int i = 0;
    unsigned char c0 = '0';
    unsigned char c9 = '9';
    int intC9 = (int) c9;
    int intC0 = (int) c0;
    int intC = (int) c;
    while(std::cin >> in)
    {
        c = in[i];
        if (intC <= intC9; intC >= intC0)
        {}
    }
    i++;
    delete[] stack;
}
