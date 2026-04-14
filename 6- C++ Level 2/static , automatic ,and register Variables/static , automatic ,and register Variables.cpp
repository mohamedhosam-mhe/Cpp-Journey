// static , automatic ,and register Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// Static Variable 

// Make the variable lifecycle exced function lifecycle 

// the difference between normal variable and static variable ---------> Normal variable [ Vanishes after function excution , while static variable remain last update to variable even after function ends ] 





void MyFunc() {

	static int Number = 1;

	cout << "MyFunc output is : " << Number << endl;

	Number++;
}


// Automatic Variabel 

// Simply let the IDE choose which type automatically based on the vlaue [ Not Prefered ]









int main()
{


	// Static Variable 

	MyFunc();
	MyFunc();
	MyFunc();



	cout << "**********************************************************************\n\n\n";
	// Automatic Variabel 

	// Simply let the IDE choose which type automatically based on the vlaue [ Not Prefered ]

	auto x = 10; // int 
	auto y = 10.5; // Double 
	auto z = "Mohamed Hosam"; // string

	cout << x << "\t" << y << "\t" << z << endl;




	// Register variables [ removed from C++ 11 and so on ] because dealing with it is dangerous its the nearst storage to CPU [ Faster than Cashe ]



}

