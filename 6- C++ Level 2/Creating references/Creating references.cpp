// Creating references.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{

	// how references works --> its simply that the location in memorey is the same and any change is happining to that location so the effect is global


	int a = 10;

	int& x = a; // here referece of x takes the reference of a , as its anoter naming for it 

	cout << "a location : " << &a << endl;
	cout << "x location : " << &x << endl;


	// so if something happend to x it also happend to a and the opposite is true 


	x = 20;

	cout << "a value : " << a << endl;
	cout << "x value : " << x << endl;

	// a and x changed both, although we changed only x , but both shares the same memory location 

	a = 50; // both will changes 

	cout << "a value : " << a << endl;
	cout << "x value : " << x << endl;




}

