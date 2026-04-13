// Problem 6 to 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Problem 6 [ Full Name ]

struct stInfo
{
	string FirstName;
	string LastName;
};

stInfo GetName() {

	stInfo Info;
	cout << "Please Enter Your First Name : \n";
	cin >> Info.FirstName;
	cout << "Please Enter Your Last Name : \n";
	cin >> Info.LastName;

	return Info;
}

string GetFullName(stInfo Info) {

	string FullName;

	FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
}

void PrintFullName(string FullName) {

	cout << "Your Full Name is : " << FullName << " . \n";
}

// Problem 7 [ Half of Number ]

int ReadNumber() {

	int Num;

	cout << "Please Enter Your Number :  \n";
	cin >> Num;

	return Num;
}
float CalculateHalfNumber(int Num) {

	return (float) Num / 2;
}

void PrintResult(int Num) {

	string Result = "The half of  " + to_string(Num) + " is  " + to_string(CalculateHalfNumber(Num));

	cout <<endl << Result << endl;
}


// Problem 8 [ Mark Pass or Fail ]

enum enPassFail {Pass = 1 , Fail = 2};

int ReadMark() {
	
	int Mark;

	cout << "Please Enter Your Mark : \n";
	cin >> Mark;

	return Mark;
}

enPassFail CheckMark(int Mark) {

	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PassFailResult(int Mark) {

	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "Pass \n";
	else
		cout << "Fail \n";
}

// Problem 9 [ Sum of 3 Numbers ]

void ReadNumbers(int& A, int& B, int& C) { // we made them by ref to update the variables in main function 

	cout << "Please enter First Number : \n";
	cin >> A;
	cout << "Please enter second number : \n";
	cin >> B;
	cout << "Please enter third number : \n";
	cin >> C;
}

int SumOfNumbers(int A, int B, int C) {

	return A + B + C;
}

void PrintSumNumbers(int Total) {

	cout << "The sum  = " << Total << endl;
}

// Problem 10 [  average of 3 numbers ] we will use Problem 9 and add another average function

float AverageOfNumbers(int Total) {

	return (float)Total / 3;
}

void PrintAvgNumbers(float avg) {

	cout << "The Avg is : " << avg << endl;
}




int main()
{

	// Problem 6 

	PrintFullName(GetFullName(GetName()));

	// Problem 7

	PrintResult(ReadNumber());

	// Problem 8 

	PassFailResult(ReadMark());

	// Problem 9 
	
	int A, B, C;

	ReadNumbers(A, B, C);

	PrintSumNumbers(SumOfNumbers(A, B, C));

	// Problem 10

	PrintAvgNumbers(AverageOfNumbers(SumOfNumbers(A, B, C)));

}

