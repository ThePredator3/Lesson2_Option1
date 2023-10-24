#pragma once

#include <iostream>

void OpenStream();

// вариант 1
void AverageValueWithVector(std::vector<int> numbersArr, int amountElements);
void MaxNum(std::vector<int> numbersArr, int amountElements);
void MinNum(std::vector<int> numbersArr, int amountElements);

// вариант 2
void AverageValue(std::ifstream & inputStream);
void MaxNum(std::ifstream & inputStream);
void MinNum(std::ifstream & inputStream);
