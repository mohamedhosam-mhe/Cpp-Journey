// Problems 1 to 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

enum enNumberType { Odd = 1, Even = 2 };
string ReadName() {
	

	string Name;
	cout << "Please Enter Your Name : \n";
	getline(cin, Name); // We are using getline function to avoid losing multiple names
	 

	return Name;
}

void PrintName(string Name) {
	
	cout << "Your Name is : " << Name << "  . \n";
}

//Problem 3 

int ReadNumber() {

	int Number;
	cout << "Please Enter any Number : " << endl;
	cin >> Number;

	return Number;
}

enNumberType CheckNumberType(int Number) {

	if (Number % 2 == 0)
		return enNumberType::Even;
	else
		return enNumberType::Odd;

}

void OddOrEven(enNumberType NumberType) {

	
	if (NumberType == enNumberType::Even)
		cout << "Number is Even" << endl;
	else
		cout << "Number is Odd \n";
	
	
	

}

// Problem 4 

//struct stInfo
//{
//	int Age;
//	bool HaveDriverLicence;
//};
//
//stInfo ReadInfo() { // We made the function type structure because we want to retrun a structure also
//	
//	stInfo Info;
//	
//	cout << "Please Enter Your Age : " << endl;
//	cin >> Info.Age;
//
//	cout << "Please Enter \' 1 \' if you Have Driver Licence and \' 0 \' if you dont : \n";
//	cin >> Info.HaveDriverLicence;
//
//	return Info;
//}
//
//bool IsAccepted(stInfo Info) {
//
//	return (Info.Age > 21 && Info.HaveDriverLicence);
//}
//
//void PrintResult(stInfo Info) {
//
//	if (IsAccepted(Info))
//		cout << "Hired" << endl;
//	else
//		cout << "Rejected \n";
//
//}

//Problem 5 [ Same as 4 but has a recommendation extra

struct stInfo
{
	int Age;
	bool HaveDriverLicence;
	bool HaveRecommendation;
};

stInfo ReadInfo() { // We made the function type structure because we want to retrun a structure also

	stInfo Info;

	cout << "Please Enter Your Age : " << endl;
	cin >> Info.Age;

	cout << "Please Enter \' 1 \' if you Have Driver Licence and \' 0 \' if you dont : \n";
	cin >> Info.HaveDriverLicence;

	cout << "Have Recommendation ? " << endl;
	cin >> Info.HaveRecommendation;

	return Info;
}

bool IsAccepted(stInfo Info) {

	if (Info.HaveRecommendation)

		return true;
	else
		return (Info.Age > 21 && Info.HaveDriverLicence);
}

void PrintResult(stInfo Info) {

	if (IsAccepted(Info))
		cout << "Hired" << endl;
	else
		cout << "Rejected \n";

}

int main()
{

	// Problem 1 [ Print Your Name ]

	PrintName("Mohamed");

	cout << "************************************* \n";
	// Problem 2 [ Read Name then print it ]

	PrintName(ReadName());
	cout << "************************************* \n";

	//Problem 3 [ Odd or Even ]

	/*OddOrEven(ReadNumber());*/ // This is Mine 


	OddOrEven(CheckNumberType(ReadNumber()));
	cout << "************************************* \n";


	// Problem 4 [ Hire a driver Case 1   ( older than 21 and have driving licenced)]
	
	
	//PrintResult(ReadInfo());


	//Problem 5 [ Hire a driver Case 2 ( if he have Recommendation hire automaticlly )
	

	PrintResult(ReadInfo());






}

