// 46- Vectors Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	// Access Elements in vectors 

	vector <int> num{ 1,2,3,4,5 }; // We can declare vector like this like an array


	// To access elements in vectors we have 2 ways 

	// 1. to use .at(i) function 

	cout << "\nusing .at(i) function \n";
	cout << "Element at Index 0 : " << num.at(0) << endl;
	cout << "Element at Index 1 : " << num.at(1) << endl;
	cout << "Element at Index 2 : " << num.at(2) << endl;
	cout << "Element at Index 3 : " << num.at(3) << endl;
	cout << "Element at Index 4 : " << num.at(4) << endl;
	// if we gone out of range it will gave us exception error 
	//cout << "Element at Index 5 : " << num.at(5) << endl;


	//2. by using vector[i] like arrays 

	cout << "\nusing [i]  \n";
	cout << "Element at Index 0 : " << num[0] << endl;
	cout << "Element at Index 1 : " << num[1] << endl;
	cout << "Element at Index 2 : " << num[2] << endl;
	cout << "Element at Index 3 : " << num[3] << endl;
	cout << "Element at Index 4 : " << num[4] << endl;




	//***************************************************************
	//***************************************************************
	//***************************************************************
	//***************************************************************


	cout << "\n\n\n";

	// Change element in vector 


	// if we want to print vector values 


	cout << "Initial vector :  ";
	for (const int& i : num) {

		cout << i << " ";
		/*i = 20;*/  // becaue i is constant we can not modify it 
	}


	cout << "\n\nUpdated Vector :  ";

	for (int& i : num) {

		i = 20; // this will assign every i to 20

		cout << i << " ";
	}

	cout << "\n\nUpdated Verctor :  ";

	num[1] = 100;
	num.at(3) = 500;
	num.at(4) = 1000;


	for (const int& i : num) {

		cout << i << " ";
	}




	//***************************************************************
	//***************************************************************
	//***************************************************************
	//***************************************************************
	cout << "\n\n************************************************\n\n\n\n\n";

	// Vector Iterator using pointers 

	// we will use num vector that declared before 
	


	// declare iterator
	vector <int> ::iterator iter; // vector <type> ::iteratro anyName;

	// Iterator type MUST be like the vector type 



	for (iter = num.begin(); iter != num.end(); iter++) {
	   //        first number         last number

		cout << *iter << "  ";

	}

	cout << "\n\n";





}

