// doublecalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Enter a double value: ";
	double dX;
	std::cin >> dX;
	std::cout << "Enter a second double value: ";
	double dY;
	std::cin >> dY;
	std::cout << "Enter one of the following : +, -, *, or / : ";
	char op;
	std::cin >> op;
	double dZ;
	if (op == '+') {
		dZ = dX + dY;
	}
	else if (op == '-') {
		dZ = dX - dY;
	}
	else if (op == '*') {
		dZ = dX * dY;
	}
	else if (op == '/') {
		dZ = dX / dY;
	}
	else {
		return -1;
	}
	std::cout << dX << " " << op << " " << dY << " is " << dZ << "\n";
	return 0;
}



