// validate Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;




// Validate Number 


int ReadNumber() {

	int Number;

	cout << "Please enter a number : " << endl;
	cin >> Number;


	while (cin.fail()) {

		//User didn't input a number 

		cin.clear();

		cin.ignore(std::numeric_limits < std::streamsize> ::max(), '\n');

		cout << "Invalid Number, Enter a valid one : " << endl;

		cin >> Number;
	}

	return Number;
}




int main()
{

	// Validate number 



	cout << "Your Number is  : " << ReadNumber() << endl;






}

