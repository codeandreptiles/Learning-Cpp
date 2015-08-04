// main.cpp : Defines the entry point for the console application.
//http://www.learncpp.com/cpp-tutorial/112-comprehensive-quiz/
//Takes two integers from the user and prints the sum

#include "stdafx.h"
#include "io.h"



int main()	//does the addition
{
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);

    return 0;
}

