// 2DArraySmoothing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <ctime>
using namespace std;

void printArray(float(**a), int width, int height)
{
	//print array 
	for (int j = 0; j < width; j++)
	{
		cout << endl;
		for (int k = 0; k < height; k++)
			cout << a[j][k] << " ";
	}
}

int main()
{
	int width, height;
	cin >> width >> height;

	//cout << "the width is " << width << "\n";
	//cout << "the height is " << height << "\n";
	
	//create new float array
	float** a = new float*[width];
	for (int i = 0; i < width; i++)
		a[i] = new float[height];

	
	srand(time(nullptr));	//use current time as seed for random generator
	/*int random_variable = std::rand();
	cout << "Random value on [0 " << RAND_MAX << "]: " << random_variable << "\n";*/
	//fill float array
	for (int j = 0; j < width; j++)
		for (int k = 0; k < height; k++)
			a[j][k] = ((float)rand() / RAND_MAX);


	printArray(a, width, height);
	
	////Access a 2D array of width w at position x / y
	//#define IDX(x, y, w) ((x)+(y) * (w))

	//a[IDX(2, 4, 10)] = 10;

	//clear memory
	for (int i = 0; i < width; i++)
		delete[]a[i];
		a = NULL;
	

	system("pause");
    return 0;
}


void smoothArray(float(*a), int width, int height)
{
	
}

