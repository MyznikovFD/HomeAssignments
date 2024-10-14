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
    //std::cout << stack[head] << std::endl;
    return stack[--head];
}

double opAddition()
{
    return ( pop() + stack[head + 1]);
}
double opDivision()
{
    return ( pop() / stack[head + 1]);
}
double opDifference()
{
    return ( pop() - stack[head + 1]);
}
double opMultiplication()
{
    return ( pop() * stack[head + 1]);
}


double operation(char cOpr)
{
    if (cOpr == '+') {
        std::cout << stack[head] << std::endl;
        return (opAddition());
    }
    else if (cOpr == '/') {
        return (opDivision());
    }
    else if (cOpr == '-') {
        return (opDifference());
    }
    else if (cOpr == '*') {
        return(opMultiplication());
    }
    else
        {
        std::cout << "ErROr!! indefined operation!" << std::endl;
        exit(EXIT_FAILURE);
    }
        return 0;
}



int main()
{
    unsigned char c;
    std::string in = "";
    unsigned char c0 = '0';
    unsigned char c9 = '9';
    int codeC9 = (int) c9;
    int codeC0 = (int) c0;
    std::string allInput;
    std::getline(std::cin, allInput);
    const int inptSize = allInput.length();
    int count = 0;
    int i = 0;
    while(count < inptSize)
    {
        c = allInput[count];
        int codeC = (int) c;
        if (c == ' ')
        {
            count++;
        }
        else if (codeC <= codeC9 && codeC >= codeC0)
        {
            while (count < inptSize && c != ' ')
            {
                in += c;
                count++;
                c = allInput[count];
            }

            strPush(in);
            in = "";
        }
        else
        {
            //std::cout << c << std::endl;
            operation(c);
            count++;
        }
        //std::cout << head << std::endl;
       // std::cout << stack[head] << std::endl;
    }
    while (i++ <= head)
        //std::cout << stack[i] << std::endl;
    //std::cout << stack[head] << std::endl;
    delete[] stack;
}
