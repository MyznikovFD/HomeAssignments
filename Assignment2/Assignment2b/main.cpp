#include <iostream>
#include <string>
#include <stdlib.h>

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

double pop()
{
    return stack[head--];
}

double opAddition()
{
return (pop()+stack[head]);
}
double opDivision()
{
return (stack[head]/pop());
}
double opDifference()
{
return (stack[head]-pop());
}
double opMultiplication()
{
return (pop()*stack[head]);
}


double operation(char cOpr)
{
    if (cOpr == '+')
         return (opAddition());
    if (cOpr == '/')
         return (opDivision());
    if (cOpr == '-')
         return (opDifference());
    if (cOpr == '*')
         return (opMultiplication());
    else
        std::cout << "ErROr!! indefined operation!" << std::endl;
        exit(EXIT_FAILURE);
        return 0;
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
            push(in);
        else
            operation(c);
    }
    i++;
    delete[] stack;
}
