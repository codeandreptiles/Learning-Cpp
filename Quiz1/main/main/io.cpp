#include "stdafx.h"
#include <iostream>
int readNumber() {	//gets an int from the user
	int x;
	std::cout << "Enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int answer) {	//prints answer
	std::cout << "The sum is " << answer << std::endl;
}