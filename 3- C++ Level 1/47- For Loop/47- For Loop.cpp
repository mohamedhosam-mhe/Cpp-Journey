// 47- For Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



// Using for loop with arrays 

void ReadArrData(int Arr[100], int& Length) { // We made the length by reference because we will use it again

	cout << "Please Enter How many numbers you want to set :  from (1~100)  \n ";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++) {

		cout << "Please Enter Number  " << i + 1 << " : " << endl;
		cin >> Arr[i];

	}

	cout << "******************************************** \n \n";


}

void PrintArrData(int Arr[100], int Length) {

	for (int i = 0; i <= Length - 1; i++) {

		cout << "Number[" << i + 1 << "] : " << Arr[i] << endl;
	}

}

int CalculateArrSum(int Arr[100], int Length) {

	int Sum = 0;
	for (int i = 0; i <= Length - 1; i++) {

		Sum += Arr[i];
	}

	return Sum;
}

int main()
{

	/*
	
	for(initilization; condition; update){

		loop body 

	}

	*/

	for (int i = 1; i <= 5; i++) {

		cout << i << endl;
		cout << "Mohamed Hosam" << endl;
	}

	for (int i = 10; i >= 1; i--) {

		cout << i << endl;
	}

	for (int i = 0; i <= 10; i = i + 2) {

		cout << i << endl;
	}



	// Using for loop with arrays

	int Arr[100], Length = 0;

	ReadArrData( Arr,  Length);
	PrintArrData( Arr,  Length);


	cout << "***************************************** \n \n";
	cout << "Sum = " << CalculateArrSum(Arr, Length) << endl;
	cout << "Avg = " << (float)CalculateArrSum(Arr, Length) / Length << endl;


}

