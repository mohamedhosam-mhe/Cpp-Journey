// Poblems 1 to 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int ReadNumber() {

	long long int Number;

	cout << "Enter a number?   ";
	cin >> Number;

	return Number;
}

// Problem 1 [ Read number and type it in words ]

//string ConvertNumberToText(int Number) {
//
//	string TextNumber = "";
//	string Ones[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//	string Tens[] = {"","","Twinty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty" };
//	string Teen[] = { "Ten", "Eleven", "Twilve", "Thirteen", "Fourteen", "Fifteen", "Sixteen","Seventeen", "Eighteen", "Ninteen" };
//
//	if (Number == 0) {
//
//		return "";
//	}
//	else if (Number < 10) {
//
//		TextNumber += Ones[Number];
//	}
//	else if (Number >= 10 && Number < 20) {
//
//		TextNumber += Teen[Number % 10];
//
//	}
//	else if (Number >= 20 && Number < 99) {
//
//		TextNumber = Tens[Number / 10] + " " + Ones[Number % 10];
//	}
//	else if (Number >= 100 && Number < 1000) {
//
//		TextNumber = Ones[Number / 100] + " Hunderd " + Tens[(Number % 100) / 10] + " " + Ones[Number % 10];
//	}
//	else if (Number >= 1000 && Number < 10000) {
//
//		TextNumber = Ones[Number /1000] + " Thousand " + Ones[(Number %1000) /100] + " Hunderd " 
//			+ Tens[(Number % 100) / 10] + " " + Ones[Number % 10];
//	}
//	else if (Number >= 10000 && Number < 20000) {
//
//		TextNumber = Teen[(Number / 1000) %10] + " Thousand " + Ones[(Number % 1000) / 100] + " Hunderd "
//			+ Tens[(Number % 100) / 10] + " " + Ones[Number % 10];
//	}
//	else if (Number >= 1000000 && Number < 1000000000) {
//
//		TextNumber = Ones[Number /1000000] + " Million " + Ones[(Number % 10000) / 1000] + " Thousand " + Ones[(Number % 1000) / 100] + " Hunderd "
//			+ Tens[(Number % 100) / 10] + " " + Ones[Number % 10];
//	}
//
//	
//	
//	return TextNumber;
//}
//




string ConvertNumberToTextUpdate(int Number) {

	string Ones[] = { "","One","Two","Three","Four","Five","Six","Seven","Eight","Nine" };
	string Tens[] = { "","","Twinty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty" };
	string Teen[] = { "Ten","Eleven","Twilve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen" };

	if (Number == 0)
		return "";

	if (Number < 10)
		return Ones[Number];

	if (Number < 20)
		return Teen[Number % 10];

	if (Number < 100)
		return Tens[Number / 10] + " " + Ones[Number % 10];

	if (Number < 1000)
		return Ones[Number / 100] + " Hunderd " + ConvertNumberToTextUpdate(Number % 100);

	if (Number < 1000000)
		return ConvertNumberToTextUpdate(Number / 1000) + " Thousand " + ConvertNumberToTextUpdate(Number % 1000);

	if (Number < 1000000000)
		return ConvertNumberToTextUpdate(Number / 1000000) + " Million " + ConvertNumberToTextUpdate(Number % 1000000);

	if (Number < 10000000000)
		return ConvertNumberToTextUpdate(Number / 1000000000) + " Bilion " + ConvertNumberToTextUpdate(Number % 1000000000);

	return "";
}












int main()
{


	// Problem 1



	


	cout << ConvertNumberToTextUpdate(ReadNumber());








}
