// 50- Dealing with strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	
	// String object ( common methods )


	string S1 = "My Name is Mohamed Hosam ";

	// return string length

	cout << S1.length() << endl;

	// retern the letter in position 

	cout << S1.at(3) << endl;

	// add string to the back of the string 

	cout << S1.append("I\'m a Software Engineer .") << endl;

	// Insert string to specific location 

	cout << S1.insert(25, " Eldin") << endl;

	// print from specific char position 

	cout << S1.substr(16, 10) << endl;

	// Add one char to the end of string [ like vectors ]

	S1.push_back('X'); // can't put it inside cout 
	cout << S1 << endl;

	// Reomove one char from the end of string [ like vectors ]

	S1.pop_back();
	cout << S1 << endl;

	// Find word in string and return position of first char

	cout << S1.find("Eldin") << endl;

	// find is case sensitive,so if we try to find string thats not inside our string 

	// it will give garbage value

	cout << S1.find("eldin") << endl;

	// we can check if its there or not like this 

	if (S1.find("eldin") == S1.npos) {

		cout << "eldin is not found " << endl;
	}


	// Clear all string letters 

	S1.clear();

	cout << S1 << endl;




	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************



	// Some cctype functions [ must included ]



	char x;
	char y;

	// Converting samll to capital and capital to small
	x = toupper('a');
	y = tolower('A');


	cout << "Converting a to A :  " << x << endl;
	cout << "Converting A to a :  " << y << endl;

	// chaeck is lower or is upper or its a digit or no 

	// it return 0 if the value is false 
	// it returns NON ZERO if the value is true 

	cout << "isupper(A) : " << isupper('A') << endl; //true

	cout << "islower(a) : " << islower('A') << endl; //false 

	cout << "isdigit(9) : " << isdigit('9') << endl; // if we are checking we must use ' '

	//There is alot of puctuation chars we can check them like this 

	cout << "ispunct('%') : " << ispunct('%') << endl;



	// any non zero is true 












}


