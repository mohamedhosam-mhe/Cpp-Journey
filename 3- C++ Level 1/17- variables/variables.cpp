// variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// There is alot of variables in every programming languages [Almost the same but in different syntax]

	// int,float,double,bool,char,string
	// As all programming languages we can assign value when defining variable or we can define it and assign value later 


	// Direct assigning 
	int myage = 15;
	float num1 = 14.5;
	double num2 = 14.545342;
	bool myboolean = true;
	char mychar = 'M';
	string myname = "Mohamed";


	// Assigning later

	int anum;

	anum = 56; 


	// printing our variables 


	cout << "My age is =  " << myage << " years old." << endl;

	cout << "This value is = " << myboolean << endl; // When printing boolean values it appears 1 [ True ] , 0 [ False ] 

	cout << "His name is:  " << myname << endl; 


	/*
	There is 3 Categorise of variables Fundamentals[int , Float , void (null), wide character (Unicode) ]
	Driven[Functions, arrays, pointers, References],
	User-defined [ Class, structure, Union, Enum, type Def ]
	*/ 

	char char1 = 'A', char2 = 'B', char3 = 'C';


	// There is a naming rules in C++ like any other language
	// We can make constants in C++ to prevent adjusting the value in the future

	int _num1 = 10; 
	_num1 = 5; 

	// if we want to make it constant we will use const parameter 

	const int PI = 3.14;  // This value can not be assigned again 






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
