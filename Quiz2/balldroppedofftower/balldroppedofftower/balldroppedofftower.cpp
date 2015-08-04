// balldroppedofftower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "myConstants.h"

int main()
{
	std::cout << "Enter the inital tower height in meters: ";
	int height;
	std::cin >> height;
	double dNewHeight;
	for (int i = 0; i < 6; i++) {
		dNewHeight = height - (constants::gravity * i * i / 2);
		if (dNewHeight < 0) {
			dNewHeight = 0.0;
		}
		std::cout << "At " << i << " seconds, the ball is at height " << dNewHeight << "\n";
	}
    return 0;
}

