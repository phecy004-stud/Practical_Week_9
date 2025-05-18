// Practical_Week_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "divide.h"
#include "point.h"

int main()
{
	std::cout << divide<int>(6, 2) << std::endl; // return 3
    std::cout << divide<double>(5.5, 2.2) << std::endl; // return 2.5
    std::cout << divide<float>(10.10f, 5.5f) << std::endl; // return 1.83636
	std::cout << divide<long>(100L, 5L) << std::endl; // return 20

    // Step 5: Points with int
    Point<int> pt1(2, 4);
    Point<int> pt2(3, 5);
    Point<int> pt3 = pt1 + pt2;
    std::cout << "pt3 (int): (" << pt3.x() << ", " << pt3.y() << ")\n"; // (5, 9)

    // Step 6: Points with double
    Point<double> ptd1(2.6, 4.8);
    Point<double> ptd2(3.7, 5.9);
    Point<double> ptd3 = ptd1 + ptd2;
    std::cout << "ptd3 (double): (" << ptd3.x() << ", " << ptd3.y() << ")\n";// (6.3, 10.7)

    return 0;
}
