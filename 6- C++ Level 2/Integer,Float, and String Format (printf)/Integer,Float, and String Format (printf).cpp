// Integer,Float, and String Format (printf).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>  // This library store std::stew
using namespace std;





int main()
{

	// Integer Formating using printf


	int Page = 1, TotalPages = 10;

	//Printing using printf using (%d) we use it inside double qutaion and pass number to it after finishing 


	printf("The page number  =  %d \n", Page);

	printf("You are in page %d of %d \n", Page, TotalPages); // this will be excuted by order 



	// We also can specify width 


	printf("The page number = %0*d \n", 2, Page); // this will make the width of the number = 2 by adding Zeros(0) before the number 
	printf("The page number = %0*d \n", 3, Page);
	printf("The page number = %0*d \n", 4, Page);
	printf("The page number = %0*d \n", 5, Page);


	int Number1 = 20, Number2 = 30;

	// We can also make calculation inside printf 

	printf("The Result of %d + %d = %d \n", Number1, Number2, Number1 + Number2);



	// ******************************************************************
	// ******************************************************************
	// ******************************************************************
	// ******************************************************************
	// ******************************************************************

	cout << "*****************************************************\n\n\n";


	// Float Fromating or Double formating [ any thing have floating point ] 


	float PI = 3.14159265359;

	// Fromat Percision 

	printf("Percision specefication of %.*f\n", 2, PI);// gives only 2 number after point and round it with third number
	printf("Percision specefication of %.*f\n", 3, PI);// gives only 3 number after point and round it with forth number
	printf("Percision specefication of %.*f\n", 1, PI); // gives only 1 number after point and round it with second number 
	printf("Percision specefication of %.*f\n", 4, PI);// gives only 4 number after point and round it with fifth number


	float x = 7.0, y = 9.0;

	printf("\n The floating division is : %.3f / %.3f = %.3f\n\n", x, y, x / y); // This prints number with 3 

	double d = 12.45;

	printf("The double value is : %.3f\n", d);
	printf("The double value is : %.4f\n", d);


	// ******************************************************************
	// ******************************************************************
	// ******************************************************************
	// ******************************************************************
	// ******************************************************************



	// String and Char Formating 

	// Back when using printf there was no string function,so we use array of Char which means [string ]
	char Name[] = "Mohamed Hosam";
	char School[] = "AlYahar";


	printf("Dear %s Your School is %s .\n", Name, School);


	char c = 'S';

	// We can set a specific width to character by adding space before it 
	printf("Setting the width of c : %*c \n", 1, c);
	printf("Setting the width of c : %*c \n", 2, c);
	printf("Setting the width of c : %*c \n", 3, c);
	printf("Setting the width of c : %*c \n", 4, c);


	// ******************************************************************
	// ******************************************************************
	// ******************************************************************
	// ******************************************************************
	// ******************************************************************


	// Set width manipulator 

	cout << "---------|--------------------------------|---------| " << endl;
	cout << " Code	  |		cName |			Mark       | " << endl;
	cout << "---------|--------------------------------|---------| " << endl;
	cout << setw(9) << "C101" << "|" << setw(32) << "introductionto Programming " << "|" << setw(9) << "95" << "|" << endl;
	cout << setw(9) << "C102" << "|" << setw(32) << "Computer Hardware" << "|" << setw(9) << "88" << "|" << endl;
	cout << setw(9) << "C1035243" << "|" << setw(32) << "Network" << "|" << setw(9) << "75" << "|" << endl;
	cout << "---------|--------------------------------|---------	| " << endl;


	// setw() only stores a specific width to put output on no matter how long is the output but not exceding the stew limits 

	// When exciding stew limit its not give an error but it will ruin the output format 

	// stew function fills the stored places from right to left 
}	



