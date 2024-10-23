#include <iostream>
#include <string>

int head = 0;
const int stackSize = 50;
double *stack = new double[stackSize];



void push(double num)
{
    if (head > stackSize)
        std::cout << "ErrOr!! stack is overflowed!" << std::endl;
    else
    {
        stack[head] = num;
        head++;
    }
}

double pop()
{
    if (head <= 0)
        std::cout << "ErrOr!! head <= 0" << std::endl;
    else
        head--;
    return stack[head];
}

void opAddition()
{
    push(pop() + pop());
}

void opDivision()
{
    double divis = pop();
    double divid = pop();
    push(divid / divis);
}
void opDifference()
{
    push(-(pop() - pop()));
}
void opMultiplication()
{
    push(pop() * pop());
}


void operation(char cOpr)
{
    if (cOpr == '+') {
        opAddition();
    }
    else if (cOpr == '/') {
        opDivision();
    }
    else if (cOpr == '-') {
        opDifference();
    }
    else if (cOpr == '*') {
        opMultiplication();
    }
    else
        {
        std::cout << "ErROr!! indefined operation!" << std::endl;
        exit(EXIT_FAILURE);
    }
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
            push((double) atof(in.c_str()));
            in = "";
        }
        else
        {
            operation(c);
            count++;
        }
    }
    std::cout << stack[head - 1] << std::endl;
    delete[] stack;
}
