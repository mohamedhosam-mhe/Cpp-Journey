// Problems 11 to 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


int RandomGenerator(int From, int To) {

	int Number = rand() % (To - From + 1) + From;

	return Number;
}


int InputNumberinRange(string Message, int From, int To) {

	int Number;

	do {

		cout << Message;
		cin >> Number;


	} while (Number <From || Number > To);

	return Number;
}

int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message;
		cin >> Number;


	} while (Number < 0);

	return Number;
}

void FillRandom3X3MatrixFrom1To10(int Matrix[3][3], int Rows, int Cols) {


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			Matrix[i][j] = RandomGenerator(1, 10);
		}
	}
}
void FillRandom3X3MatrixFromFToT(int Matrix[3][3], int Rows, int Cols, int From, int To) {


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			Matrix[i][j] = RandomGenerator(From, To);
		}
	}
}


void Print3X3Matrix(int Matrix[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			printf(" %0*d   ", 2, Matrix[i][j]);
		}
		cout << "\n";
	}
}



// Problem 11 [ Check if two matrices are identical or not --> Sum all numbers and check equality ]

bool CheckEqual(int Matrix1Sum, int Matrix2Sum) {

	return (Matrix1Sum == Matrix2Sum);
}

int SumMatrixNumbers(int Matrix[3][3], short Rows, short Cols) {

	int Counter = 0;
	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			Counter += Matrix[i][j];
		}
	}

	return Counter;
}


void CompareMatricesEqual(int Matrix1[3][3], int Matrix2[3][3]) {

	int Matrix1Sum = SumMatrixNumbers(Matrix1, 3, 3);
	int Matrix2Sum = SumMatrixNumbers(Matrix2, 3, 3);

	

	cout << "\n Matrix1 Sum = " << Matrix1Sum << endl;
	cout << "\n Matrix2 Sum = " << Matrix2Sum << endl;

	if (CheckEqual(Matrix1Sum, Matrix2Sum)) {

		cout << "\nYes: Matrices are  equal.\n";
	}
	else {

		cout << "\nNo: Matrices are NOT equal.\n";
	}
}




// Problem 12 [ Check matrices are typical or not ] 



bool CheckTypicalOrNot(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix1[i][j] != Matrix2[i][j]) {

				return false;
			}
		}
	}

	return true;
}


void CompareMatricesTypical(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols) {


	if (CheckTypicalOrNot(Matrix1, Matrix2, Rows, Cols)) {

		cout << "\nYes: Matrices are typical." << endl;
	}
	else {

		cout << "\nNo: Matrices are NOT typical." << endl;
	}
}



// Problem 13 [ Check Identity Matrix ] 


bool CheckIdentityMatrixOrNot(int Matrix[3][3], short Rows, short Cols) {


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (i == j && Matrix[i][j] != 1) {

				return false;
			}
			
			if (i != j && Matrix[i][j] != 0) {

				return false;
			}
		}
	}

	return true;

}




void CheckIdentityMatrix(int Matrix[3][3], short Rows, short Cols) {

	if (CheckIdentityMatrixOrNot(Matrix, Rows, Cols)) {

		cout << "\nYes: Matrix is identity." << endl;
	}
	else {
		
		cout << "\nNo: Matrix is NOT identity." << endl;
	}
}



// Problem 14 [ check scalar matrix --> diagonal is equal but any number but its equal like diagonal is 2,3,9,8 and the rest is ZEROS ]


bool CheckScalarMatrixOrNot(int Matrix[3][3], short Rows, short Cols) {

	
	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			
			if (i == j && Matrix[i][j] != Matrix[0][0]) {
				
				return false;
			}

			if (i != j && Matrix[i][j] != 0) {

				return false;
			}
		}
	}

	return true;

}




void CheckScalarMatrix(int Matrix[3][3], short Rows, short Cols) {

	if (CheckScalarMatrixOrNot(Matrix, Rows, Cols)) {

		cout << "\nYes: Matrix is Scalar." << endl;
	}
	else {

		cout << "\nNo: Matrix is NOT Scalar." << endl;
	}
}




// Problem 15 [ Count how many times specific number givin by user is appear in the matrix ] 


int CountAppearance(int Matrix[3][3], int Rows, int Cols, int Number) {

	int NumberCounter = 0;


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix[i][j] == Number) {

				NumberCounter++;
			}
		}
	}

	return NumberCounter;

}

void CountNumberAppearanceinMatrix(int Matrix[3][3], int Rows, int Cols, int Number) {

	Number = InputNumberinRange("Enter the number you want to count in matrix: (1 ~9)   ", 1, 9);
	cout << "The Number counted " << CountAppearance(Matrix, Rows, Cols,Number) << endl;
}




// Problem 16 [ Check sparce matrix --> sparce matrix is the matrix the zeros count is more than any other numbers ]


void CheckSparseMatrix(int Matrix[3][3], int Rows, int Cols) {

	int MatrixSize = Rows * Cols;

	int CountZeros = CountAppearance(Matrix, 3, 3, 0);
	int OthersNumberCount = MatrixSize - CountZeros;


	if (CountZeros > OthersNumberCount) {

		cout << "\nYes: Sparce matrix." << endl;
	}
	else {
		
		cout << "\nNo: NOT Sparce matrix." << endl;
	}
}



// Problem 17 [ Check if number exist in matrix ]


bool CheckNumberInMatrix(int Matrix[3][3], int Number, int Rows, int Cols) {

	

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix[i][j] == Number) {

				return true;
				
			}
			else {

				return false;
			}
		}
	}
}


// Problem 18 [ print intersected numbers in 2 matrices ]

bool CheckAllNumbersIn2Matrix(int Matrix[3][3], int Number, int Rows, int Cols) {



	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix[i][j] == Number) {

				return true;

			}
		}
	}

	return false;
}

void PrintVectorItems(vector <int> Vector) {

	for (int& i : Vector) {

		cout << i << "\t";
	}
	cout << "\n";
}
void CheckIntersectedNumbersInTwoMatrixes(int Matrix1[3][3], int Matrix2[3][3], int Rows, int Cols) {

	//vector <int> IntersectedNumbers;

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if(CheckAllNumbersIn2Matrix(Matrix1, Matrix2[i][j],3,3)) {

				//IntersectedNumbers.push_back(Matrix2[i][j]); // we can make it usign vector 

				cout <<"\n\n"<< setw(3) << Matrix2[i][j] << "\t";
			}
		}
	}

	cout << "\n";


	//PrintVectorItems(IntersectedNumbers);//we can use vector 

}





// Problem 19 [ Print Min and Max number in matrix ]


void MinMaxNumberInArray(int Matrix[3][3], int Rows, int Cols) {


	int Min =Matrix[0][0], Max = Matrix[0][0];

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix[i][j] < Min) {

				Min = Matrix[i][j];
			}

			if (Matrix[i][j] > Max) {

				Max = Matrix[i][j];
			}
		}
	}

	cout << "Minimum Number is : " << Min << endl;

	cout << "Maximum Number is : " << Max << endl;


}

// Anoter solution
int MinNumberInArray(int Matrix[3][3], int Rows, int Cols) {


	int Min = Matrix[0][0];

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix[i][j] < Min) {

				Min = Matrix[i][j];
			}
		}
	}

	return Min;
}

int MaxNumberInArray(int Matrix[3][3], int Rows, int Cols) {


	int Max = Matrix[0][0];

	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols; j++) {

			if (Matrix[i][j] > Max) {

				Max = Matrix[i][j];
			}
		}
	}

	return Max;
}


// Problem 20 

int IsPalindromMatrix(int Matrix[3][3], short Rows, short Cols){


	for (int i = 0; i < Rows; i++) {

		for (int j = 0; j < Cols/2; j++) {

			if (Matrix[i][j] != Matrix[i][Cols - 1 - j]) {

				return false;
			}
		}
	}

	return true;


}


int main()
{
	// To seed randomm function 

	srand((unsigned)time(NULL));



	// Problem 11

	int Matrix1[3][3], Matrix2[3][3];

	cout << "Matrix1 : \n";
	FillRandom3X3MatrixFrom1To10(Matrix1, 3, 3);
	Print3X3Matrix(Matrix1, 3, 3);

	cout << "Matrix2 : \n";
	FillRandom3X3MatrixFrom1To10(Matrix2, 3, 3);
	Print3X3Matrix(Matrix2, 3, 3);

	CompareMatricesEqual(Matrix1, Matrix2);


	cout << "******************************************************************************\n\n\n";

	//Problem 12

	// we will use privious matrices to check on 


	CompareMatricesTypical(Matrix1, Matrix2, 3, 3);


	cout << "******************************************************************************\n\n\n";


	// Problem 13 

	int IdentityMatrix[3][3] = {
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};// if we check this identity matrix it will give True 


	CheckIdentityMatrix(Matrix1, 3, 3);



	cout << "******************************************************************************\n\n\n";


	// Problem 14 


	int ScalarMatrix[3][3] = {
		{9,0,0},
		{0,9,0},
		{0,0,9}
	};


	CheckScalarMatrix(ScalarMatrix, 3, 3);



	// Problem 15

	int UserNumber = 0;

	CountNumberAppearanceinMatrix(ScalarMatrix, 3, 3, UserNumber);


	cout << "******************************************************************************\n\n\n";


	// Problem 16



	CheckSparseMatrix(Matrix1, 3, 3);


	cout << "******************************************************************************\n\n\n";


	// Problem 17

	int UserInput = ReadPositiveNumber("Please Enter a Positive number to check if its in the matrix :  ");


	if (CheckNumberInMatrix(ScalarMatrix, UserInput, 3, 3)) {

		cout << "Yes it is there.";
	}
	else {

		cout << "No it is NOT.";
	}


	cout << "******************************************************************************\n\n\n";


	// Problem 18

	int NewMatrix1[3][3], NewMatrix2[3][3];

	FillRandom3X3MatrixFromFToT(NewMatrix1, 3, 3, 1, 100);
	FillRandom3X3MatrixFromFToT(NewMatrix2, 3, 3, 1, 100);

	cout << "\nMatrix1 : \n";
	Print3X3Matrix(NewMatrix1, 3, 3);
	cout << "\nMatrix2 : \n";
	Print3X3Matrix(NewMatrix2, 3, 3);


	CheckIntersectedNumbersInTwoMatrixes(NewMatrix1, NewMatrix2, 3, 3);


	cout << "******************************************************************************\n\n\n";


	// Problem 19



	MinMaxNumberInArray(NewMatrix1, 3, 3);


	cout << "\nMinimum Number is : " << MinNumberInArray(NewMatrix1, 3, 3) << endl;
	cout << "\nMaximum Number is : " << MaxNumberInArray(NewMatrix1, 3, 3) << endl;


	// Problem 20 



	if (IsPalindromMatrix(NewMatrix1, 3, 3)) {

		cout << "Matrix is Palindrom.";

	}
	else {

		cout << "Matrix is NOT Palindorm.";
	}






}

