// Problems 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;



int RandomGenerator(int From, int To) {

	int Number;

	Number = rand() % (To - From + 1) + From;

	return Number;

}



// Problem 1 [ Fill 3x3 matrix with random numbers form 1 to 100 ]
void FillThreeByThreeMatrix(int Matrix[3][3]) {

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			Matrix[i][j] = RandomGenerator(1, 100);
		}
	}

}


void PrintThreeByThreeMatrix(int Matrix[3][3]) {

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			cout << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}



int main()
{

	// To seed our random function

	srand((unsigned)time(NULL));


	// Problem 1 : 

	int MyMatrix[3][3];

	FillThreeByThreeMatrix(MyMatrix);
	cout << "The following is 3X3 Random matrix : \n";
	PrintThreeByThreeMatrix(MyMatrix);










}




