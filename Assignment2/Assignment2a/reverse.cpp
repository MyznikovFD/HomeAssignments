#include <iostream>
#include <fstream>
#include <filesystem>

int main()
    {
    int size = std::filesystem::file_size("rabbit.txt");
    std::ifstream infile;
    infile.open("rabbit.txt");


    infile.close();
    std::cout << size << std::endl;
}

int rabbitsRecovery()
    {
    std::ofstream inRabbit;
    inRabbit.open("rabbit.txt");
    inRabbit << "White" << std::endl << "Rabbit";
    inrabbit.close()
}
