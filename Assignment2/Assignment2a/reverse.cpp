#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    int size = std::filesystem::file_size("rabbit.txt");
    std::ifstream infile;
    char *buffer = new char[size];

    infile.open("rabbit.txt", std::ios::binary);
    if (!infile.is_open())
        std::cout << "Error infile is not opened!" << std::endl;
    else
        infile.read(buffer, size);
    infile.close();
    int bufElmnt;
    for (int i = 0; i < size; ++i)
    {
        bufElmnt = buffer[i];
        buffer[i] = size;
        
    }
    delete[] buffer;



    std::ofstream inRabbit;
    inRabbit.open("rabbit.txt");
    inRabbit << "White" << std::endl << "Rabbit" << std::endl;
    inRabbit.close();
}
