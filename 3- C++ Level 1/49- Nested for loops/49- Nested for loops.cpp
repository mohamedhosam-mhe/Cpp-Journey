// 49- Nested for loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Nested for loops 
	// Times Table

	for (int i = 1; i <= 10; i++) {

		cout << "i = " << i << endl;

		for (int b = 1; b <= 10; b++) {

			cout << i << " * " << b << " =  " << i * b << endl;

		}

		cout << "-------------------------- \n \n";
	}



}

