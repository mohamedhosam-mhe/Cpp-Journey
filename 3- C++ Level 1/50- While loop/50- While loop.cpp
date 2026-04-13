// 50- While loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int ReadNumInRange(int From, int To) {

	int Number;

	cout << "Please Enter a number between :  " << From << " ~ " << To << endl;
	cin >> Number;

	while (Number < From || Number > To) {

		cout << "Wrong Entry!! , Please Enter a number between : " << From << " ~ " << To << endl;
		cin >> Number;
	}

	return Number;

}

int main()
{
	//while loop 
	// we will use while loop over for loop if we don't know how much iterations we have 

	/*
	while (condition) {

		if the function is TRUE The loop will execute the body 

		update;
	}
	*/ 

	int i = 1;

	while (i <= 5) {

		cout << i << endl;
		
		i++;
	}


	// we will make a program to validate a given number between a range of 2 numbers

	// we will make it as a function and we will call it 
	

	cout << "The Number  : " << ReadNumInRange(10, 15) << endl;




	// The is a loop called do-while loop 
	// its main objective that the code will run once at leaset 

	int x = 6;
	do {
		cout << "Mohamed Hosam";
		x++;
	} while (x <= 5); // although the condition is false, but it excuted once because of the do-while loop
}

