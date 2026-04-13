// 52- Break and continue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

	// break statment breaks the loop and end it to make the program more effecient

	int Arr[10] = { 10,20,30,40,50,60,82,64,45,100 };
	int SearchFor = 20;
	for (int i = 0; i <=10-1; i++){
		
		cout << "We are in iteration : " << i + 1 << endl;

		if (Arr[i] == SearchFor) {

			cout << "We found it in position : " << i << endl;
			break;// if we found our statment there is no need of continuing the loop 
			// we use break statment to break the loop and make the program more efficinet
		}

	
	}


	// Continue Statment

	// with continue we will continue excuting the loop,but we will not excute the code 
	//after it, and start the loop again

	for (int i = 0; i <= 5; i++) {

		if (i == 3) {

			continue; // this conditoin is true and the continue executed,so any code after it will be skipped 
			// That's why 3 didn't printed on the screen 
		}

		cout << i << endl;
	}


}

