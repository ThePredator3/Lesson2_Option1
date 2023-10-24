#include <iostream>
#include <vector>

#include "FiveNumbers.hpp"

void FiveNumbers()
{
    int numbers = 0;
    int sum = 0;
    
    std::vector<int> myArr {};
    
    std::cout << "input five numbers: " << std::endl;
    
    for (int i = 0; i < 5; i++)
    {
        std::cin >> numbers;
        
        while (!std::cin.good())
        {
            std::cout << "your input is wrong!" << std::endl;
            std::cout << "input a number" << std::endl;
            std::cin.clear();
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> numbers;
        }
        
        myArr.push_back(numbers);
        
        sum += numbers;
    }
    
    std::cout << "\nnumbers:" << std::endl;
    
    for (auto now : myArr)
    {
        std::cout << now << ", ";
    }
    
    std::cout << "\nsum = " << sum << std::endl;
}
