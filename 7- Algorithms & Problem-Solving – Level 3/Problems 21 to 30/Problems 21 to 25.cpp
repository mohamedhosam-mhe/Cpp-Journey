// Problems 21 to 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;




string ReadString() {

	string YourString;

	
	getline(cin, YourString);

	return YourString;
}

char ReadChar() {

	char Letter;

	cin >> Letter;

	return Letter;
}

// Problem 21 [ Fibonacci Series ] 


void FillFibonacciSeries(int Number, vector <int>& FiboSeries) {


	FiboSeries = { 1,1 };

	for (int i = 0; i < Number-2; i++) {

		FiboSeries.push_back(FiboSeries[i] + FiboSeries[i + 1]);
	}


}


void PrintVectorContent(vector <int> Vector) {

	for (int& i : Vector) {

		cout << i << "\t";
	}

	cout << endl;
}


// we can also make it print only without arrays or vectors 

void PrintFibonacciSeries(short Number) {

	int FeboNumber = 0;
	int Prev2 = 0, Prev1 = 1;

	cout << "1\t";

	for (int i = 2; i <= Number; i++) {

		FeboNumber = Prev1 + Prev2;
		cout << FeboNumber << "\t";

		Prev2 = Prev1;
		Prev1 = FeboNumber;
			

	}

}



// Problem 22 [ Fibonacci Series using recursion ] 


void FibonacciUsingRecursion(int Number, int Prev1, int Prev2) {

	
	int FeboNumber = 0;

	
	if (Number > 0) {

		FeboNumber = Prev1 + Prev2;

		cout << FeboNumber << "\t";

		Prev2 = Prev1;
		Prev1 = FeboNumber;

		FibonacciUsingRecursion(Number - 1, Prev1, Prev2);
	}
}



// Problem 23 [ Print first letter of each word ] 

void PrintFirstLetterOfString(string Anything) {

	cout << "First Letters of this string : \n";
	cout << Anything[0] << endl;

	for (int i = 1; i < Anything.length(); i++) {

		if (Anything[i] == ' ' && i + 1 < Anything.length() && Anything[i + 1] != ' ') {

			cout << Anything[i + 1] << endl;
		}


	}
}

// Problem 24 [ Capitalize every first word ] 

string PrintCapitalizeEveryFirstLetter(string &Anything) {


	bool IsFirstLetter = true;

	

	for (int i = 0; i < Anything.length(); i++) {

		if (Anything[i] != ' ' && IsFirstLetter) {

			Anything[i] = toupper(Anything[i]);
		}

		IsFirstLetter = (Anything[i] == ' ' ? true : false);
	}

	return Anything;

}




// Problem 25 [ small every first word ] 


string PrintSmallEveryFirstLetter(string& Anything) {


	bool IsFirstLetter = true;



	for (int i = 0; i < Anything.length(); i++) {

		if (Anything[i] != ' ' && IsFirstLetter) {

			Anything[i] = tolower(Anything[i]);
		}

		IsFirstLetter = Anything[i] == ' ' ? true : false;
		
	}

	return Anything;

}





// Problme 26  [ upper / lower all letters in string ] 


string StringToUpper(string &Anything) {
	for (int i = 0; i <= Anything.length(); i++) {

		Anything[i] = toupper(Anything[i]);

	}
	return Anything;
 }


string StringTolower(string& Anything) {
	for (int i = 0; i <= Anything.length();i++) {

		Anything[i] = tolower(Anything[i]);

	}
	return Anything;
}



// Problem 27 [ Invert Character Case --> if small turn to capital if capital turn to small ] 



char ConvertCharCase(char Letter) {

	return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
}



// Problem 28 [ Invert all letters in string ]


string ConvertAllLetterCase(string Anything) {

	for (int i = 0; i <= Anything.length(); i++) {

		Anything[i] = ConvertCharCase(Anything[i]);
	}

	return Anything;
}



// Problem 29 [ write a program to count string length and small / capital letters in that string ] 


void PrintCountLettersCalculation(string YourString) {

	short CapitalCount = 0;
	short SmallCount = 0;

	for (int i = 0; i < YourString.length(); i++) {


		if (isupper(YourString[i])) {

			CapitalCount++;
		}
		else if (islower(YourString[i])) {

			SmallCount++;
		}

	}

	cout << "String Length = " << YourString.length() << endl;

	cout << "Capital Letters Count =  " << CapitalCount << endl;

	cout << "Small Letters Count =  " << SmallCount << endl;

	// we can divide it to 2 functions capital count and small count 
}







// Problem 30 [ Count specific letter givin by user in a string also givin by user ] 


short CountSpecificLetter(string YourString, char Letter) {

	short LetterCount = 0;
	for (int i = 0; i < YourString.length(); i++) {

		if (YourString[i] == toupper(Letter) || YourString[i] == tolower(Letter)) {

			LetterCount++;
		}

	}

	return LetterCount;
}





int main()
{


	// Problem 21

	vector <int> FiboSeries;

	FillFibonacciSeries(10, FiboSeries);

	PrintVectorContent(FiboSeries);

	PrintFibonacciSeries(10);// Another solution but its not scalable its just printing without storing the series



	cout << "\n\n*********************************************************************\n\n\n";


	// Problem 22 

	cout << "1\t";

	FibonacciUsingRecursion(10,1,0);


	cout << "\n\n*********************************************************************\n\n\n";

	// Problem 23


	string YourString;

	cout << "\nPlease Enter Your String ? \n";
	getline(cin, YourString);
	PrintFirstLetterOfString(YourString);

	cout << "\n\n*********************************************************************\n\n\n";

	// Problem 24 

	string CapitalString;
	cout << "Please enter string to capitalize every word : ";

	getline(cin, CapitalString);

	cout << "String after Captalizing every word : \n " << PrintCapitalizeEveryFirstLetter(CapitalString) << endl;

	cout << "\n\n*********************************************************************\n\n\n";

	// Problem 25 

	string SmallString;
	cout << "Please enter string to small every word : ";

	getline(cin, SmallString);

	cout << "String after small every word : \n " << PrintSmallEveryFirstLetter(SmallString) << endl;

	cout << "\n\n*********************************************************************\n\n\n";


	// Problem 26

	
	cout << "Please Enter your String ? \n";

	string S1 = ReadString();

	cout << "String After Upper : \n" << StringToUpper(S1) << endl;

	cout << "String After lower : \n" << StringTolower(S1) << endl;

	cout << "\n\n*********************************************************************\n\n\n";

	// Problem 27 


	char Letter;

	cout << "Enter a character to change its case ? ";
	cin >> Letter;

	cout << "Char After Converting Case : \n" << ConvertCharCase(Letter);

	cout << "\n\n*********************************************************************\n\n\n";



	// Problem 28

	cout << "Please Enter your String to convert case all the letters  ? \n";

	string S2 = ReadString();
	

	S2 = ConvertAllLetterCase(S2);

	cout <<  "\nString After Inverting All letters Case : \n" << S2 << endl;


	// Problem 29 

	cout << "Please Enter your String to count capital and small chars  ? \n";

	string S3 = ReadString();
	

	PrintCountLettersCalculation(S3);


	cout << "\n\n*********************************************************************\n\n\n";


	// Problem 30



	cout << "Please Enter Your String : \n";
	string S4 = ReadString();
	cout << "Please Enter a Character : \n";
	char Letter2 = ReadChar();


	cout << "Letter \'" << Letter2 << "\' Count =  " << CountSpecificLetter(S4, Letter2) << endl;






}

