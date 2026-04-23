// 44- Dynamic Array using pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int NumberOfStudents;

	cout << "Enter Number of Students : ";
	cin >> NumberOfStudents;
	
	cout << "\n\n";


	float* ptr;

	// Memory allocation of [any number ] of float 
	ptr = new float[NumberOfStudents];  


	cout << "Enter Students grades : " << endl;


	for (int i = 0; i < NumberOfStudents; i++) {

		cout << "Student [" << i + 1 << "] :  ";
		cin >> *(ptr + i);
		cout << endl;
	}


	for (int i = 0; i < NumberOfStudents; i++) {

		cout << "Student [" << i + 1 << "] :  " << *(ptr + i) << endl;
		
	}



	// every new has delete 

	delete[] ptr;



}
