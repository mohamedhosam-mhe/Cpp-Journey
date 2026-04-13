// Ranged Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



int main()
{
	
	// We will know about Ranged Loop 


	int Arr[] = { 1,2,3,4,5,6,7,8,9 };

	/*
	Syntax 


	for (item type  : collection of items ){
	
		cout << n << endl;
	}
	

	**IMPORTANT**  the item and the collection must be in the SAME type 
	
	
	*/


	for (int n : Arr) {

		cout << n << endl;
	}

	cout << "****************************************************** \n\n";



	string Arr1[] = { "Mohamed", "Ahmed", "Ibrahim", "Sufian", "Yousef", "Hosam" };



	for (string n : Arr1) {

		cout << n << endl;
	}


	cout << "****************************************************** \n\n";

	// we also can put the collection directlry into for 



	for (int i : { 1, 2, 3, 4, 5, 6, 7, 8, 9 }) {


		cout << i << endl;
	}



}

