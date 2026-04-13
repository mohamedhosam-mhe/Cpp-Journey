// Problems 11 to 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;




// Problem 11 [ Average Pass Fail ] 

// Same as Problem 10 but we will make another function to check average 

// ************************************************************


// Problem 12 [ Max of two numbers ] 
// He did it in alternative way ,so ill use this way in next Problem

struct Numbers {

	int Num1;
	int Num2;
};

Numbers ReadNumbers() {

	Numbers FLNumbers;

	cout << "Please Enter First Number : \n";
	cin >> FLNumbers.Num1;
	cout << "Please Enter Second Number : \n";
	cin >> FLNumbers.Num2;

	return FLNumbers;
}

bool CheckMax(Numbers FLNumbers) {

	if (FLNumbers.Num1 > FLNumbers.Num2)
		return true;
	else
		return false;
}

void PrintResult(bool Check) {


	if (Check)
		cout << "First Number is Max \n";
	else
		cout << "Second Number is Max \n";

}

//********************************************************

// Problem 13 [ Max of 3 numbers ] // I will use abu hadhud way

void ReadNums(int& A, int& B, int& C) {

	cout << "Please Enter First Number : \n";
	cin >> A;
	cout << "Please Enter Second Number : \n";
	cin >> B;
	cout << "Please Enter Third Number : \n";
	cin >> C;
}

int GetMax(int A, int B, int C) {

	if (A > B > C)
		return A;
	else if (B > A > C)
		return B;
	else
		return C;

}

void PrintMax(int Max) {

	cout << "The Biggest Number is : " << Max << endl;
}

//****************************************************

//Problem 14 [ Swap 2 Numbres ]

void ReadN(int& Num1, int& Num2) {

	cout << "Please Enter First Number : \n";
	cin >> Num1;
	cout << "Please Enter Second Number : \n";
	cin >> Num2;
}

void SwapNumbers(int& Num1, int& Num2) {

	int Temp;

	Temp = Num1; // we must save Num1 in Temp First Not the opposite

	Num1 = Num2;

	Num2 = Temp;
}

void PrintNumbers(int Num1, int Num2) {

	cout << "First Number is : " << Num1 << endl;
	cout << "Second Number is : " << Num2 << endl;

	cout << "************************************************ \n";
}

//****************************************************


// Problem 15 [ Calculate Rectangle Area H*W ]

void ReadHW(float& Hight, float& Width) {
	
	cout << "Please Enter Hight : \n";
	cin >> Hight;
	cout << "Please Enter Width : \n";
	cin >> Width;
}

float CalculateRecArea(float Hight, float Width) {

	float Area;

	Area = Hight * Width;

	return Area;
}

void PrintArea(float Area) {

	cout << "The Area of the Rectangle is : " << Area << endl;
	cout << "******************************************** \n";
}

int main()
{

	// Problem 12 

	PrintResult(CheckMax(ReadNumbers()));

	cout << "**********************************************" << endl;

	// Problem 13 
	int A, B, C;
	ReadNums(A, B, C);
	PrintMax(GetMax(A, B, C));

	cout << "**********************************************" << endl;


	//Problem 14 
	int Num1, Num2;
	ReadN(Num1, Num2);
	PrintNumbers(Num1, Num2);
	SwapNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);

	//Problem 15

	float Hight, Width;

	ReadHW(Hight, Width);

	PrintArea(CalculateRecArea(Hight, Width));

}
