// Bitwise AND & OR Operator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;






int main()
{


	//Bit Wise And operator 

	// When we use single AND (&) operator it called bitwise and because 
	// it converts decimals to binary and compare them bit by bit 

	// 12 --> 00001100
	// 25 --> 00011001
	//_______________________
	//        00001000 -- > 8 (in decimal)



	cout << "The Result is : " << (12 & 25) << endl;


	// Bitwise OR (|)

	// Same as Bitwise and but with OR logic 

	// if we use the same previous example the result -- > 00011101  ( 29 in decemal )


	cout << "The Result from Bitwise OR is : " << (12 | 25) << endl;



	// Double AND is Called ( Logical AND )

	// Double OR is Called ( Logical OR )




}

