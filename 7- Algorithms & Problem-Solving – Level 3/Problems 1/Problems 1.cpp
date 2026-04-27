// Problems 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;



int RandomGenerator(int From, int To) {

	int Number;

	Number = rand() % (To - From + 1) + From;

	return Number;

}



// Problem 1 [ Fill 3x3 matrix with random numbers form 1 to 100 ]
void FillThreeByThreeMatrix(int Matrix[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			Matrix[i][j] = RandomGenerator(1, 100);
		}
	}

}


void PrintThreeByThreeMatrix(int Matrix[3][3],short Rows,short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout << setw(3) << Matrix[i][j] << "\t";
		}
		cout << endl;
	}
}


// Problem 2 [ sum every row numbers in the previous 3x3 matrix ]




int RowSum(int Matrix[3][3], short RowNumber, short Col) {

	int Sum = 0;

	for (int i = 0; i < Col; i++) {

		Sum += Matrix[RowNumber][i];
	}

	return Sum;
}

void SumMatrixRows(int Matrix[3][3], short Rows, short Cols) {

	
	cout << "The Following are the sum of earch row in the matrix : \n";


	for (int i = 0; i < Rows; i++) {

		cout << "Row " << i + 1 << " Sum = " << RowSum(Matrix,i,Cols) << endl;
		
	}
}




// Problem 3 [ Make a single array to store sum results of the matrix ] 


void FillOneDiminsionArrayMatrix(int Results[3],int Matrix[3][3], int Row,int Col) {   // We just can use previous function SumMatrix rows to fill result matrix ,but this is new problem 




	for (int i = 0; i < Col; i++) {

		Results[i] = RowSum(Matrix, i, Col);

		
	}

}


void PrintOneDiminsionalArray(int Results[3]) {


	for (int i = 0; i < 3; i++) {

		cout << "Row " << i + 1 << " sum = " << Results[i] << endl;
	}
}



// Problem 4 [ Sum each colomns of the random 3x3 matrix ]


int ColSum(int Matrix[3][3], short Rows, short Cols) {

	int ColSum = 0;

	for (int j = 0; j < Rows; j++) {


		ColSum += Matrix[j][Cols];

	}

	return ColSum;
}
void ColSumResults(int Matrix[3][3], short Row, short Cols) {

	cout << "The Following are the sum of earch col in the matrix : \n";

	for (int i = 0; i < Cols; i++) {

		cout << "Col " << i + 1 << " sum  = " << ColSum(Matrix, Row, i) << endl;
	}
}



// Problem 6 [ Store previous col sum in one dimisional array matrix ]

void ColSumResultsToStoreInArray(int Matrix[3][3], int ColSumResult[3],short Row, short Cols) {

	cout << "The Following are the sum of earch col in the matrix : \n";

	for (int i = 0; i < Cols; i++) {

		ColSumResult[i] = ColSum(Matrix, Row, i);
	}
}








int main()
{

	// To seed our random function

	srand((unsigned)time(NULL));


	// Problem 1 : 

	int MyMatrix[3][3];

	FillThreeByThreeMatrix(MyMatrix,3,3);
	cout << "The following is 3X3 Random matrix : \n";
	PrintThreeByThreeMatrix(MyMatrix,3,3);



	cout << "***************************************************\n\n\n";


	// Problem 2 : 



	SumMatrixRows(MyMatrix, 3, 3);

	cout << "***************************************************\n\n\n";


	// Problem 3 : 


	int Result[3];
	FillOneDiminsionArrayMatrix(Result, MyMatrix, 3, 3);

	PrintOneDiminsionalArray(Result);





	cout << "***************************************************\n\n\n";


	// Problem 4 : 


	ColSumResults(MyMatrix, 3, 3);


	cout << "***************************************************\n\n\n";


	// Problem 5 : 

	int ColSumResult[3];

	ColSumResultsToStoreInArray(MyMatrix, ColSumResult, 3, 3);

	PrintOneDiminsionalArray(ColSumResult);



}




