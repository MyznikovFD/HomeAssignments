#include <iostream>
#include <string>

int head = 0;
const int stackSize = 50;
double *stack = new double[stackSize];


void strPush(std::string s)
{
    double num = (double) atof(s.c_str());
    if (head > stackSize)
        std::cout << "ErrOr!! stack is overflowed!";
    else
        stack[head++] = num;
}
void doublePush(double num)
{
    if (head > stackSize)
        std::cout << "ErrOr!! stack is overflowed!";
    else
        stack[head] = num;
}

double pop()
{
    return stack[head--];
}

double opAddition()
{
return (stack[head] + pop());
}
double opDivision()
{
return (stack[head] / pop());
}
double opDifference()
{
return (stack[head] - pop());
}
double opMultiplication()
{
return (stack[head] * pop());
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
        return(opMultiplication());
    else
        std::cout << "ErROr!! indefined operation!" << std::endl;
        exit(EXIT_FAILURE);
        return 0;
}



int main()
{
    unsigned char c;
    std::string in;
    unsigned char c0 = '0';
    unsigned char c9 = '9';
    int intC9 = (int) c9;
    int intC0 = (int) c0;
    while(std::cin >> in)
    {
        c = in[0];
        int intC = (int) c;
        if (intC <= intC9; intC >= intC0)
           strPush(in);
        else
           operation(c);
        std::cout << '/';
       int i = 0;
       while (i <= head)
            std::cout << stack[i] << std::endl;
            i++;
    }
    std::cout << stack[head];
    delete[] stack;
}
