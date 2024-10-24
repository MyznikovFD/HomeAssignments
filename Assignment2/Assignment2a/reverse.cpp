#include <iostream>
#include <fstream>
#include <filesystem>
#include <limits.h>


int main()
{
    int size = std::filesystem::file_size("rabbit.txt");
    char *buffer = new char[CHAR_BIT * size];

    std::ifstream infile;
    infile.open("rabbit.txt", std::ios::binary | std::ios::in);
    if (!infile.is_open())
        std::cout << "Error infile is not opened!" << std::endl;
    else
        infile.read((char*)buffer, sizeof(buffer));
    infile.close();

    int bufElmnt;
    for (int i = 0; i < (size / 2); i++)
    {
        bufElmnt = buffer[i];
        buffer[i] = buffer[size - i - 1];
        buffer[size - i - 1] = bufElmnt;
    }

    std::ofstream outfile;
    outfile.open("reversedRabbit.txt", std::ios::binary | std::ios::out);
    if (!outfile.is_open())
        std::cout << "Error outfile is not opened!" << std::endl;
    else
        outfile.write((char*)buffer, sizeof(buffer));
    outfile.close();
    delete[] buffer;
}
