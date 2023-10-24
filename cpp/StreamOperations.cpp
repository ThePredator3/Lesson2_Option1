#include <fstream>
#include <iostream>
#include <vector>

#include "StreamOperations.hpp"

void OpenStream()
{
    /*
     не получается передать поток из этой функции через вызов в main
     */
    std::ifstream inputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/Option1/numbers.txt");
    
    if (!inputStream.is_open())
    {
        std::cout << "file doesn't exist" << std::endl;
    }
    else
    {
        std::cout << "file is open" << std::endl;
    }

/*
    // как один из вариантов, можно записать все числа в вектор и после передать вектор в функцию
    
    int numbers {0};
    int i {0};
    std::vector<int> numbersArr {};
    
    while (!inputStream.eof())
    {
        inputStream >> numbers;
        numbersArr.push_back(numbers);
        ++i;
    }

//    AverageValueWithVector(numbersArr, i);
//    MaxNum(numbersArr, i);
//    MinNum(numbersArr, i);
*/

    
//    AverageValue(inputStream);
//    MaxNum(inputStream);
//    MinNum(inputStream);
}



void AverageValueWithVector(std::vector<int> numbersArr, int amountElements)
{
    int sum {0};
    int i {0};
    
    while (i < amountElements)
    {
        sum += numbersArr[i];
        ++i;
    }
    
    double avValue = (double) sum / i;
    std::cout << "average value = " << avValue << std::endl;

}

void MaxNum(std::vector<int> numbersArr, int amountElements)
{
    int maxNum {0};
    
    for (int i = 0; i < amountElements; ++i)
    {
        if(numbersArr[i] > maxNum)
        {
            maxNum = numbersArr[i];
        }
    }
    
    std::cout << "maxNum = " << maxNum << std::endl;
}

void MinNum(std::vector<int> numbersArr, int amountElements)
{
    int minNum {0};
    
    for (int i = 0; i < amountElements; ++i)
    {
        if(minNum > numbersArr[i])
        {
            minNum = numbersArr[i];
        }
    }

    std::cout << "minNum = " << minNum << std::endl;
}

//---------------------------------------------------------

void AverageValue(std::ifstream & inputStream)
{
    int number = 0;
    int sum = 0;
    int i = 0;
    double avValue = 0.0;

    while(!inputStream.eof())
    {
        inputStream >> number;
        ++i;
        sum += number;
    }
    
    avValue = (double) sum / i;
    
    std::cout << "average value = " << avValue << std::endl;

}

void MaxNum(std::ifstream & inputStream)
{
    int number = 0;
    
    std::vector <int> myArr {};
    int maxNum = 0;
    
    for (int i = 0; !inputStream.eof(); ++i)
    {
        inputStream >> number;
        myArr.push_back(number);
        
        if(myArr[i] > maxNum)
        {
            maxNum = myArr[i];
        }
    }
    
    std::cout << "maxNum = " << maxNum << std::endl;
}

void MinNum(std::ifstream & inputStream)
{
    int number = 0;
    
    std::vector <int> myArr {};
    int minNum = 0;
    
    for (int i = 0; !inputStream.eof(); ++i)
    {
        inputStream >> number;
        myArr.push_back(number);
        
        if(minNum > myArr[i])
        {
            minNum = myArr[i];
        }
    }
    
    std::cout << "minNum = " << minNum << std::endl;
}

