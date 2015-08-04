// BinaryCalculator.cpp : Defines the entry point for the console application.
// Takes a decminal int and prints it as an 8bit unsigned binary number

#include "stdafx.h"
#include <iostream>
#include <cmath>

int greater_than_power(int i, int power);

int main()
{
	std::cout << "Enter an int between 0 and 255: ";
	int choice;
	std::cin >> choice;
	int bit;
	for (int i = 7; i >= 0; --i) {
		if (i == 3) {
			std::cout << " ";
		}
		bit = greater_than_power(choice, i);
		if (bit == 1) {
			choice -= pow(2, i);
		}
		std::cout << bit;
	}
	std::cout << "\n";
    return 0;
}

int greater_than_power(int i, int power) {
	if (i >= pow(2, power)) {
		return 1;
	}
	else {
		return 0;
	}
}
