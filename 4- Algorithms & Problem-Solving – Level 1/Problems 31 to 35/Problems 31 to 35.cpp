// Problems 31 to 35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Problem 31 [ Read Number and Put it to the power of 2,3,4

int ReadNumber() {

	int Number;
	cout << "Please Enter a Number : " << endl;
	cin >> Number;

	return Number;
}

void PrintPowerOfNumber(int Number) {


	int PowOfTwo = Number * Number;
	int PowOfThree = Number * Number * Number;
	int PowOfFour = Number * Number * Number * Number;

	cout << "The Power of 2 To " << Number << " is : " << PowOfTwo << endl;
	cout << "The Power of 3 To " << Number << " is : " << PowOfThree << endl;
	cout << "The Power of 4 To " << Number << " is : " << PowOfFour << endl;

}

//*************************************

//Problem 32 [ Read a Number and make it to the power of M ]

int ReadPower() {

	int Number;
	cout << "Please Enter The Power : " << endl;
	cin >> Number;

	return Number;

}

int CalculatePowerOfM(int Power,int Number) {

	int Result = 1;

	if (Power == 0) {

		return 1;
	}
	

	for (int i = 1; i <= Power; i++) {

		Result = Result * Number;
	}

	return Result;
	

	
}

void PrintPowerOfM(int Result) {
	
	cout << "The Result is : " << Result << endl;

}


// Problem 33 [ Print Grades A,B,C,D,E,F ]

int ReadNumberINRange(int From, int To) {

	int Number; 

	do {
		cout << "Please Enter Number between 0 : 100 : " << endl;
		cin >> Number;

	} while (Number < From || Number >To);
	
	return Number;

}

char GetGradesLetter(int Grade) {

	if (Grade < 50)
		return 'F';
	else if (Grade == 50 || Grade < 60)
		return 'E';
	else if (Grade == 60 || Grade < 70)
		return 'D';
	else if (Grade == 70 || Grade < 80)
		return 'C';
	else if (Grade == 80 || Grade < 90)
		return 'B';
	else if (Grade == 90 || Grade <= 100)
		return 'A';
}

// Problem 34 [ Commesion Percentage ]

float ReadTotalSales() {

	int TotalSales;

	cout << "What is your total sales : \n ";
	cin >> TotalSales;

	return TotalSales;
}

float CommesionCalculation(float Sales) {

	if (Sales >= 1000000)
		return Sales * 0.01;
	else if (Sales >= 500000)
		return Sales * 0.02;
	else if (Sales >= 100000)
		return Sales * 0.03;
	else if (Sales >= 50000)
		return Sales * 0.05;
	else
		return 0;


	// In Abu Hadhoud Course he make a different float functino t get only the percentage rate after this 
	// makes another function to multiply this rate by the sales

}

void PrintCommissionSales(float Commission) {

	cout << "Your Commission is : " << Commission << endl;
}


// Problem 35 [ Piggy Bank ] To calculate how much money i saved 

void knowingMoney(int& Penny, int& Nickel, int& Dime, int& Quarter, int& Dollar){
	

	cout << "Please Enter How many Pennies You Have : \n";
	cin >> Penny;
	cout << "Please Enter How many Nickels You Have : \n";
	cin >> Nickel;
	cout << "Please Enter How many Dimes You Have : \n";
	cin >> Dime;
	cout << "Please Enter How many Quarter You Have : \n";
	cin >> Quarter;
	cout << "Please Enter How many Dollars You Have : \n";
	cin >> Dollar;

}

int CalculatePennies(int Penny, int Nickel, int Dime, int Quarter, int Dollar) {

	int TotalPennies = Penny + Nickel * 5 + Dime * 10 + Quarter * 25 + Dollar * 100 ;

	return TotalPennies;
}

float CalculateDollar(int TotalPennies) {

	float TotalDollars = (float)TotalPennies / 100;
	
	return TotalDollars;
}

void PrintPiggyBank(int TotalPennies, float TotalDollars) {

	cout << "You have : " << TotalPennies << " Pennies ." << endl;
	cout << "That means you have : " << TotalDollars << " Dollars ." << endl;
}



int main()
{

	// Problem 31

	PrintPowerOfNumber(ReadNumber());

	cout << "**************************************** \n ";

	// Problem 32

	PrintPowerOfM(CalculatePowerOfM(ReadPower(),ReadNumber()));


	cout << "**************************************** \n ";

	// Problem 33

	//ReadNumberINRange(0, 100);

	cout << "The Result is : " << GetGradesLetter(ReadNumberINRange(0, 100)) << endl;


	// Program 34

	PrintCommissionSales(CommesionCalculation(ReadTotalSales()));


	// Problem 35

	int Penny, Nickel, Dime, Quarter, Dollar;

	knowingMoney(Penny, Nickel, Dime, Quarter, Dollar);

	int TotalPennies = CalculatePennies(Penny, Nickel, Dime, Quarter, Dollar);

	float TotalDollars = CalculateDollar(TotalPennies);

	PrintPiggyBank(TotalPennies,TotalDollars);

}

