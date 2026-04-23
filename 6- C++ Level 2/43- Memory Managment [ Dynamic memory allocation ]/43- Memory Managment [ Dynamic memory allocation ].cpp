// 43- Memory Managment [ Dynamic memory allocation ].cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




int main()
{

	// Dynamic memory allocation --> using memory in a smart way [ To make the program faster ]

	// There is new concept calls new to just store value in pointer for short time and then delete it to relise its locations 

	// Every new == delete [ without deleting the values of the pointers, so what will be the difference between them and variables 


	int* ptr1; // This decleration dosent take any space in memory its just pointing to int 
	float* ptr2; // declare float pointer 



	// Dynamically allocate in memory 
	ptr1 = new int; // Now we take a space in memory to store an integer 
	ptr2 = new float;  // Now we take a space in memory to store a float 

	// assign values to memory 
	*ptr1 = 20;
	*ptr2 = 15.5;
	 

	// Print values of 
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	cout << "This is the location of the Intetger pointer that allocated dinamically : " << ptr1 << endl;
	cout << "This is the location of the float pointer that allocated dinamically : " << ptr2 << endl;

	// Deallocate memroy 


	delete ptr1;
	delete ptr2;








}

