// Problems 46 to 50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;




// Problem 46 [ Print letters from A to Z ] Using Ascii Tabel 

void PrintLetters() {

	for (int i = 65; i <= 90; i++) {

		cout << char(i) << endl; // Small letter have different number
	}
}


// Problem 47 [ loan installments ] how many months installments if you can pay specific monthly payment

int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int GetHowManyMonthInstallment(int Loan, int MonthlyPayment) {

	return round(Loan / MonthlyPayment);
}

void PrintMonthInstallment(int Months) {

	cout << Months << " Month " << endl;
}


// Problem 48 [ Loan installment ] Total loan and months and gives how much payment per month

float GetHowMuchMonthlyPayment(int Loan, int Months) {

	return (float)Loan / Months;
}

void PrintMonthlyPayment(float MonthlyPayment) {

	cout << MonthlyPayment << "$ Every Month \n";
}


// Problem 49 [ ATM Pin Code ]


string ReadPinCode() {

	string PinCode;

	cout << "Please Enter PinCode : \n";
	cin >> PinCode;

	return PinCode;
}
bool ChekPin() {

	string PinCode;

	do {

		PinCode = ReadPinCode();

		if (PinCode == "1234") {

			return true;
		}
		else {

			cout << "Wrong Pin \n";
			system("color 4F"); // Turn Screen to Red
		}
	} while (PinCode != "1234");
}


// Problem 50 [ ATM Pin Code 3 Times Attempt only ]


string ReadPinCodeThreeOnly() {

	string PinCode;

	cout << "Please Enter PinCode : \n";
	cin >> PinCode;

	return PinCode;
}
bool ChekPinThreeOnly() {

	string PinCode;
	int counter = 1;

	do {
		for (int i = 0; i <= 3; i++) {
			cout << "This is " << counter << "Attempt of 3 \n";
			PinCode = ReadPinCodeThreeOnly();

			if (PinCode == "1234") {

				return true;
			}
			else {

				cout << "Wrong Pin \n";
				system("color 4F"); // Turn Screen to Red

				if (counter == 3)
					return false;

				counter++;

				
				
			}

		}
		
	} while (PinCode != "1234");
}








int main()
{

	// Problem 46

	PrintLetters();

	cout << "*********************************************************** \n";

	// Problem 47 

	int Loan = ReadPositiveNumber("Please Enter Total Loan : ");
	int MonthlyPayment = ReadPositiveNumber("Please Enter Monthly Payment : ");
	cout << "-------------------------------------- \n";
	PrintMonthInstallment(GetHowManyMonthInstallment(Loan, MonthlyPayment));

	cout << "*********************************************************** \n";

	// Problem 48 

	int TotalLoan = ReadPositiveNumber("Please Enter Total Loan : ");
	int Months = ReadPositiveNumber("Please enter how many months : ");
	cout << "-------------------------------------- \n";
	PrintMonthlyPayment(GetHowMuchMonthlyPayment(TotalLoan, Months));

	// Problem 49

	if (ChekPin()) {
		cout << "Your Balance is 7500$ \n";
		system("color 2F"); // Make Screen Green
	}

	cout << "*********************************************************** \n";
	cout << "*********************************************************** \n";
	cout << "*********************************************************** \n";

	

	// Problem 50

	if (ChekPinThreeOnly()) {

		cout << "Your Balance is 7500$ \n";
		system("color 2F"); // Make Screen Green
	}
	else {
		cout << "Your Card is Blocked!!! \n";
	}
}

