#include "FiveNumbers.hpp"
#include "DataBase.hpp"
#include "ShowText.hpp"
#include "StreamOperations.hpp"

#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // задание 1
    
//    FiveNumbers();
    
    // задание 2
    
//    for (int i = 0; i < 1; ++i)
//    {
//        WriteToInventarisation();
//    }
    
//    ShowInventarisation();
    
    // задание 3
    
//    EvenNumbers();
    
    // задания 4.1 и 4.2 (функция 4.1 написана в StreamOperations.cpp, но из нее не получается передать
    // поток в 4.2, поэтому функционал прописал прямо в main
    
//    std::ifstream inputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/Option1/numbers.txt");
//    
//    if (!inputStream.is_open())
//    {
//        std::cout << "file doesn't exist" << std::endl;
//    }
//    else
//    {
//        std::cout << "file is open" << std::endl;
//    }
    
    // добавил вызов функций в OpenStream();
    
    OpenStream();
    
    // функции из задания 4.2
    
//    AverageValue(number);
//    MaxNum(inputStream);
//    MinNum(inputStream);
    
    return 0;
}
