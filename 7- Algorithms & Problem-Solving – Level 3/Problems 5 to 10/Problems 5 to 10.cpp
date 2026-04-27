// Problems 5 to 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;




int RandomGenerator(int From, int To) {

	int Number = rand() % (To - From + 1) + From;

	return Number;
}





// Problem 6 [ Fill 3x3 array with ordered number form 1 to 9]


void FillOrderedArray(int Matrix[3][3], int Rows, int Cols) {

	int Counter = 0;
	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {
			Counter++;
			Matrix[i][j] = Counter;
		}
	}
}



void PrintThreeByThreeArray(int Matrix[3][3], int Rows, int Cols) {


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			cout << Matrix[i][j] << "\t";
		}

		cout << endl;
	}

}



// Problem 7 [ Make a transpose matrix , rows become colomns ] 



void FillTransposeMatrix(int Matrix[3][3], int TransposeMatrix[3][3], short Rows, short Cols) {


	for (int i = 0; i < Cols; i++) {

		for (int j = 0; j < Rows; j++) {


			TransposeMatrix[j][i] = Matrix[i][j];

		}
	}
}




// Porblem 8 [ Fill Two Matrixes with random numbers from 1 to 10 and multiply them and save the multiply result in another 3x3 matrix and print all of them 



void FillRandomMatrixFromOneToTen(int Matrix[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			Matrix[i][j] = RandomGenerator(1, 10);
		}
	}
}

void MultiplyThreeByThreeMatrix(int Matrix1[3][3], int Matrix2[3][3],int MulMatrix[3][3],int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			MulMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}

}


void PrintThreeByThreeMatrixUsingprintfFormat(int Matrix[3][3], int Rows, int Cols) {


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			printf("%0*d \t", 2, Matrix[i][j]);
		}

		cout << endl;
	}

}





// Problem 9 [ Make a matrix with random numbers and print only middle row and middle colomn ]

// we will use Mul Matrix from previous example 



//void FillMiddleRowAndCol(int Matrix[3][3],int MidRow[3],int MidCol[3], int Rows, int Cols) {
//
//	for (int i = 0; i < Rows; i++) {
//
//		MidRow[i] = Matrix[1][i];
//		MidCol[i] = Matrix[i][1];
//	}
//}
// 
//void PrintOneDiminsionArray(int Array[3], int Length) {
//
//	for (int i = 0; i < Length; i++) {
//
//		printf("%0*d \t", 2, Array[i]);
//	}
//}
//

// another answer 

void PrintMiddleRow(int Matrix[3][3], short Rows, short Cols) {

	short MiddleRow = Rows / 2;

	for (int i = 0; i < Rows; i++) {

		printf(" %0*d ", 2, Matrix[MiddleRow][i]);
	}
}

void PrintMiddleCol(int Matrix[3][3], short Rows, short Cols) {

	short MiddleCol = Cols / 2;

	for (int i = 0; i < Rows; i++) {

		printf(" %0*d ", 2, Matrix[i][MiddleCol]);
	}
}







// Problem 10 [ Fill a random matrix from 1 to 10 and after this Sum all numbers ] we will use previous function fill random matrix from one to tem



int SumAllMatrixNumbers(int Matrix[3][3], int Rows, int Cols) {

	int SumResult = 0;

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			SumResult += Matrix[i][j];

		}
	}

	return SumResult;
}











int main()
{


	// To seed random number and get different numbers every execute

	srand((unsigned)time(NULL));

	// Problem 6
	
	int MyMatrix[3][3];

	FillOrderedArray(MyMatrix, 3, 3);

	cout << "This is a 3x3 ordered matrix : \n";
	PrintThreeByThreeArray(MyMatrix, 3, 3);


	cout << "****************************************************************\n\n\n";


	// Problem 7

	int TransposeMatrix[3][3];

	FillTransposeMatrix(MyMatrix, TransposeMatrix, 3, 3);


	cout << "The following is the transposed matrix : \n\n";
	PrintThreeByThreeArray(TransposeMatrix, 3, 3);


	cout << "****************************************************************\n\n\n";


	// Problem 8

	int Matrix1[3][3], Matrix2[3][3], MulMatrix[3][3];

	FillRandomMatrixFromOneToTen(Matrix1, 3, 3); // filling matrix number 1
	FillRandomMatrixFromOneToTen(Matrix2, 3, 3);//  filling matrix number 2

	MultiplyThreeByThreeMatrix(Matrix1, Matrix2, MulMatrix, 3, 3);


	cout << "\nMatrix 1 : \n";

	PrintThreeByThreeMatrixUsingprintfFormat(Matrix1, 3, 3);

	cout << "\nMatrix 2 : \n";

	PrintThreeByThreeMatrixUsingprintfFormat(Matrix2, 3, 3);

	cout << "\nMultiplication Result : \n";


	PrintThreeByThreeMatrixUsingprintfFormat(MulMatrix, 3, 3);


	

	cout << "****************************************************************\n\n\n";



	// Problem 9

	// we will use mul matrix  from previous example 



	cout << "\nMiddle row of Mul Matrix is : \n";

	PrintMiddleRow(MulMatrix, 3, 3);


	cout << "\nMiddle Col of MulMatrix : \n";

	PrintMiddleCol(MulMatrix, 3, 3);


	cout << "****************************************************************\n\n\n";



	// Problem 10 
	// we will use FillOrderedArrayFunction


	int NewMatrix[3][3];

	FillRandomMatrixFromOneToTen(NewMatrix, 3, 3);

	cout << "New Matrix : \n";
	PrintThreeByThreeArray(NewMatrix, 3, 3);
	printf("\nSum of New Matrix =  %0*d  \n", 2, SumAllMatrixNumbers(NewMatrix, 3, 3));




}

