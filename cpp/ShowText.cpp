#include <fstream>
#include <iostream>

#include "ShowText.hpp"

void FileCreation()
{
    std::ofstream outputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/Option1/numbers.txt", std::ios::app);
}

void EvenNumbers()
{
    std::ifstream inputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/Option1/numbers.txt");
    
    if (!inputStream.is_open())
    {
        std::cout << "file doesn't exist" << std::endl;
    }
    else
    {
        std::cout << "file is open" << std::endl;
    }
    
    int number = 0;
    std::string otherData = "";
    
    while(!inputStream.eof())
    {
        inputStream >> number;
        
        if (number % 2 == 0)
        {
            std::cout << number << " ";
        }
    }
    
    inputStream.close();
    
    std::cout << std::endl;
}
