// Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// Recursion is simply the function calls itself 


// we must use it wisly in our progrma or preffered not to use it because if the number of calls exceeded stack limit we will ge stack overflow Error


void PrintNumbers(int a, int b) {


	if (a <= b) {

		cout << a << endl;

		PrintNumbers(a + 1, b);

	}
}


// HomeWork

void PrintDeNumbers(int a, int b) {

	if (b >= a) {

		cout << b << endl;

		PrintDeNumbers(a, b - 1);
	}
}





int PowerOfNumber(int Base, int Power) {

	if (Power == 0) {

		return 1;
	}
	else {

		return (Base * PowerOfNumber(Base, Power - 1));
	}

	 
}




int main()
{


	PrintNumbers(1, 10); // This will run normally 


	cout << "**********************************************\n\n\n";


	PrintNumbers(1,100);// This will also run normally


	// but if we tried to but a large number 



	//PrintNumbers(1, 999999);  // This will give us an ERORR because stack is full " Stack OverFlow ERORR "



	// Use it if you are guranteed that you will not reach to stack over flow erorr;



	cout << "**********************************************\n\n\n";




	//HomeWork

	PrintDeNumbers(1, 10);


	cout << "**********************************************\n\n\n";



	cout <<PowerOfNumber(2, 2) << endl;


}

