// Problem 36 to 40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



// Problem 36 [ Calculator ]

enum enOperator { Add = '+', Sub = '-', Mul = '*', Div = '/' };

float ReadNumber(string Message) {

	float Number;

	cout << Message << endl;
	cin >> Number;

	return Number;
}


enOperator OperatorSelected() {
	char Operator;
	cout << "Please Enter Operator :  + , - , * , /  \n ";
	cin >> Operator;

	if (Operator == enOperator::Add)
		return enOperator::Add;
	else if (Operator == enOperator::Sub)
		return enOperator::Sub;
	else if (Operator == enOperator::Mul)
		return enOperator::Mul;
	else if (Operator == enOperator::Div)
		return enOperator::Div;

}

void CalculateEquation(float Num1, float Num2, char Operator) {

	if (Operator == '+')
		cout << Num1 << '+' << Num2 << '=' << Num1 + Num2 << endl;
	else if (Operator == '-')
		cout << Num1 << '-' << Num2 << '=' << Num1 - Num2 << endl;
	else if (Operator == '*')
		cout << Num1 << '*' << Num2 << '=' << Num1 * Num2 << endl;
	else 
		cout << Num1 << '/' << Num2 << '=' << Num1 / Num2 << endl;


}

// Problem 37 [ Sum Until User input -99 ]

float CalcualteNumberUserAdded(float Number) {

	float Result = 0; 

	while (Number != -99) {

		
		Result = Result + Number;

		Number = ReadNumber("Please enter another Number");

	}

	return Result;
}

void PrintSumResult(float Result) {

	cout << "The Result is : " << Result << endl;
}


// Problem 38 [ Prim Number ]

enum enPrimNotPrim {Prime = 1, NotPrime =2};

float ReadPositiveNumber(string Message) {

	float Number;

	cout << Message;
	cin >> Number;


	if (Number < 0)

		ReadPositiveNumber("Please enter a Positive Number : \n");

	return Number;
}

enPrimNotPrim CheckPrime(int Num) {

	for (int i = 2; i < Num ; i++) {

		if (Num % i == 0)
			return enPrimNotPrim::NotPrime;
	}

	return enPrimNotPrim::Prime;
}

void PrintNumberType(int Num) {

	switch (CheckPrime(Num)) {

	case enPrimNotPrim::Prime:
		cout << "Prime \n";
		break;
	case enPrimNotPrim::NotPrime:
		cout << "Not Prime \n";
		break;
	}
}


// Problem 39 [ Pay Reminder ] 

int CalculatePayReminder(int Pill , int CashPaid) {

	return CashPaid - Pill;

}


// Problem 40 [ Service Fee and Sales Tax ] [Resturant Charges 10% Service and 16% sales tax ]


float TotalPillafterServiceAndTax(float PillValue) {

	float Service = PillValue * 0.10;
	float Tax = (PillValue + Service) * 0.16;

	float TotalPill = PillValue + Service + Tax;

	return TotalPill;
}



int main()
{
	// Problem 36 

	int Num1 = ReadNumber("Please Enter First Number : \n");
	int Num2 = ReadNumber("Please Enter Second Number : \n");

	char Operator = OperatorSelected();

	CalculateEquation(Num1, Num2, Operator);


	// Problem 37 

	float UserNumber = ReadNumber("Please Enter a number : \n");

	PrintSumResult(CalcualteNumberUserAdded(UserNumber));


	// Problem 38 

	cout << "****************************************************" << endl;
	PrintNumberType(ReadPositiveNumber("Please Enter a Positive Number: "));

	cout << "****************************************************" << endl;

	// Problem 39

	int Pill = ReadPositiveNumber("Please Enter Your Pill amount : \n ");
	int CashPaid = ReadPositiveNumber("Please Enter Your CashPaid : \n");

	cout << "--------------------------------------- \n";

	cout << "The Reminder is : " << CalculatePayReminder(Pill, CashPaid) << endl;

	// Problem 40 

	int PillValue = ReadPositiveNumber("What is the Total Pill Value :  \n");

	cout << "Your pill after service and tax is : " << TotalPillafterServiceAndTax(PillValue) << endl;
}

