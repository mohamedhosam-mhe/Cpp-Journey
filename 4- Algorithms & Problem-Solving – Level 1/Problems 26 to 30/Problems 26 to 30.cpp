// Problems 26 to 30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Problem 26 [ Print Numbers from 1 to N ]

int ReadNumber() {

	int N; 

	cout << "Please enter the number of Iterations : \n";
	cin >> N;

	return N;
}

void PrintRangeUsingFor(int N) {

	cout << "For Loop" << endl;

	for (int i = 1; i <= N; i++) {

		cout << i << endl;
	}
}

void PrintRangeUsingWhile(int N) {
	cout << "While Loop" << endl;

	int i = 0;
	while (i < N) {

		i++;
		cout << i << endl;

		
	}
}

void PrintRangeUsingDoWhile(int N) {

	cout << "Do-While Loop" << endl;

	int i = 0;

	do {
		i++;
		cout << i << endl;
		
	} while (i < N);
}


// Problem 27 [ Print Numbers from N to 1 ]

void PrintRangeUsingForD(int N) {

	cout << "For Loop  27 \n";
	for (int i = N; i >= 1; i--) {

		cout << i << endl;
	}
}

void PrintRangeUsingWhileD(int N) {

	cout << "While Loop 27 \n";
	int i = N;
	while (i >= 1) {

		cout << i << endl;

		i--;
	}
}

void PrintRangeUsingDoWhileD(int N) {

	cout << "Print Using Do-While 27 \n";
	int i = N;

	do {

		cout << i << endl;
		i--;
	} while (i >= 1);
}


// Problem 28 [ Sum Odd Numbers from 1 to N ]

int SumOddNumbers(int N) {

	int Result = 0;
	for (int i = 0; i <= N; i++) {

		if (i % 2 != 0) {
			
			Result += i;
		}
	}
	return Result;
}

void PrintResult(int Result) {

	cout << "The Result is : " << Result << endl;
}

// Problem 29 [ Sum Even Numbres from 1 to N ] Abo Hadhud Way

enum enEvenOrOdd { Even = 1 , Odd = 2};

enEvenOrOdd CheckEvenOrODD(int N) {

	if (N % 2 == 0)
		return enEvenOrOdd::Even;
	else
		return enEvenOrOdd::Odd;

}

int SumEvenNumbers(int N) {

	int Total = 0;
	for (int i = 0; i <= N; i++) {

		if (CheckEvenOrODD(i) == enEvenOrOdd::Even)
			Total += i;
	}

	return Total;
}

void PrintEvenTotal(int Total) {

	cout << "The Total is : " << Total << endl;
}


// Problem 30 [ Factorial of N ]

int FactorialOfN(int N) {

	int Results = 1;

	for (int i = N; i > 1; i--) {

		Results = Results * i;
	}

	return Results;
}

void PrintFactorial(int Results) {

	cout << "The Factorial is : " << Results << endl;
}



int main()
{


	int N = ReadNumber();

// Problem 26

	PrintRangeUsingFor(N);

	cout << "******************************************** \n";

	PrintRangeUsingWhile(N);

	cout << "******************************************** \n";


	PrintRangeUsingDoWhile(N);

	cout << "******************************************** \n";


	// Problem 27 

	PrintRangeUsingForD(N);

	cout << "******************************************** \n";

	PrintRangeUsingWhileD(N);

	cout << "******************************************** \n";

	PrintRangeUsingDoWhileD(N);

	cout << "******************************************** \n";


	// Problem 28

	int R = ReadNumber();
	PrintResult(SumOddNumbers(R));

	cout << "******************************************** \n";

	// Problem 29 

	int L = ReadNumber();
	PrintEvenTotal(SumEvenNumbers(L));

	// Problem 30 


	PrintFactorial(FactorialOfN(L));
}


