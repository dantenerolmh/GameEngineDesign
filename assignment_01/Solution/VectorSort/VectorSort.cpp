// VectorSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	//declare a vector
	std::vector<int> foo;
	int inputInt = 5;
	//std::cin >> inputInt;
	//cout << "You input a value is " << inputInt <<endl;
	if (inputInt != 0)
	{
		foo.push_back(inputInt);
		std::cin >> inputInt;
	}
	else
	{
		std::cout << "my vector contains: ";
		for (std::vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
			std::cout << ' ' << *it;
		std:cout << '\n';
	}
	system("pause");
    return 0;
}

