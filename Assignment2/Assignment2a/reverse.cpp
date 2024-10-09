#include <iostream>
#include <fstream>
#include <filesystem>

int main()
    {
    int size = std::filesystem::file_size("rabbit.txt");
    std::ifstream infile;
    int *buffer = new int[size];

    infile.open("rabbit.txt", std::ios::binary);
    if (!infile.is_open())
        std::cout << "Error infile is not opened!" << std::endl;
    else
        infile.read((char*)&buffer, size);
    infile.close();

    delete[] buffer;
    



    std::ofstream inRabbit;
    inRabbit.open("rabbit.txt");
    inRabbit << "White" << std::endl << "Rabbit" << std::endl;
    inRabbit.close();
}

