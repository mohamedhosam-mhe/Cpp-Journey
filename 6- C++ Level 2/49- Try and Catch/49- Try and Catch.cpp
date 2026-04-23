// 49- Try and Catch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// if we are susbect that any line of code that can give an error 

	// we can use try and catch methods 


	// NOTE : use it in very special occasions because its slowing the program


	vector <int> num{ 1,2,3,4,5 };


	cout << num.at(0) << endl;
	cout << num.at(1) << endl;
	cout << num.at(2) << endl;


	try {

		cout << num.at(5);
	}
	catch (...) 
	
	{
		cout << "Out of bound \n";

	}


	// There is alot of uses to those upcomming, but now we know what are they used to 




}

