// Practical_Week_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "divide.h"

int main()
{
	std::cout << divide<int>(6, 2) << std::endl; // return 3
    std::cout << divide<double>(5.5, 2.2) << std::endl; // return 2.5
    std::cout << divide<float>(10.10f, 5.5f) << std::endl; // return 1.83636
	std::cout << divide<long>(100L, 5L) << std::endl; // return 20

    return 0;
}
