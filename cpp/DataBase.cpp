#include <fstream>
#include <iostream>
#include <string>

#include "DataBase.hpp"

void WriteToInventarisation()
{
    std::ofstream outputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/Option1/inventarisation.txt", std::ios::app);
    
    std::string equipmentType = "";
    int employeeNumber = 0;
    std::string inventoryDate = "";
    
    std::cout << "input equipment type: ";
    std::cin >> equipmentType;
    
    std::cout << "input employee number: ";
    std::cin >> employeeNumber;
    
    while (!std::cin.good())
    {
        std::cout << "your input is wrong!" << std::endl;
        std::cout << "input a employee number" << std::endl;
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> employeeNumber;
    }
    
    std::cout << "input inventory date: ";
    std::cin >> inventoryDate;
    
    outputStream << equipmentType << " " << employeeNumber << " " << inventoryDate << std::endl;
}


void ShowInventarisation()
{
    std::ifstream inputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/Option1/inventarisation.txt");
    
//    std::string equipmentType = "";
//    int employeeNumber = 0;
//    std::string inventoryDate = "";
//    
//    while(!inputStream.eof())
//    {
//        inputStream >> equipmentType;
//        std::cout << equipmentType << "\t";
//        
//        inputStream >> employeeNumber;
//        std::cout << employeeNumber << "\t";
//        
//        inputStream >> inventoryDate;
//        std::cout << inventoryDate << std::endl;
//    }
    
    std::string str = "";
    
    while(!inputStream.eof())
    {
        std::getline(inputStream, str);
        std::cout << str << std::endl;
    }
 
    inputStream.close();
}



