// Two Dimensional Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;





int main()
{

	// Two dimensional array [ like python ] 

	// any two dimensional array includes rows and coloumns 

	// Rows are the bracket it self while colomns are the numbers inside the bracket 


	int x[3][4] = {

		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};


	for (int i = 0; i < 3; i++) {

		for (int b = 0; b < 4; b++) {

			cout << x[i][b] << " ";
		}

		cout << endl;


	 }



	cout << "******************************************************** \n\n\n\n";


	// Homework 

	// store the multiblication table reuslt 10x10 and print it 


	int MultiplicationTable[10][10];

	for (int rows = 0; rows < 10; rows++) {

		for (int col = 0; col < 10; col++) {

			MultiplicationTable[rows][col] = (col + 1) * (rows + 1);

		}
	}


	// Print The table 

	for (int i = 0; i < 10; i++) {

		for (int b = 0; b < 10; b++) {

			printf("%0*d  ", 2,MultiplicationTable[i][b]);
		}

		printf("\n");
	}







}

