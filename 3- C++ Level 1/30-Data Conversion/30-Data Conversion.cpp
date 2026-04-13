// 30-Data Conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Date conversion in C++ is like in python 
	// There are 2 types of converting implecite and explecite ( recommened like python ) 

	// Data conversion between numbers ( there will be data loss if we convert from big to small size data type like float to int )

	int Num1; 
	double Num2 = 19.88;

	//Num1 = Num2; // this is implecite conversion dosen't need anything 


	//Num1 = int(Num2); // This is the normal way using int function called explicit conversion

	Num1 = (int)Num2; // this is the same explicit conversion so we will use the normal one 


	cout << Num1 << "\n";




	// string conversion to numbers is tricky in c++ 
	// firstly we must include string library 
	// there is functions to convert string into different type of numbers data type 
	// from string to int   we will use stoi ( sting to int ) function
	// from string to float   we will use stof ( sting to float ) function
	// from string to doubel   we will use stod ( sting to double ) function



	string str = "123.456";

	int num1 = stoi(str);

	cout << num1 << "\n";

	float num2 = stof(str);

	double num3 = stod(str);

	cout << num2 << endl;
	cout << num3 << endl;


	//when converting number to string we use to_string() library

	int num10 = 10;

	string number10 = to_string(num10);

	cout << number10<< endl;


	//strings is an array of strings, so we can access each character by referncing to it 

	string name = "Mohamed";
	string father = "Hosam";

	cout <<  " my string length is : " << name.length() << endl;
	cout << name[2] << endl;

	string fullName = name + father;

	cout << fullName << endl;


	// in C++ the cin function just take the first word and ignore anything after space,
	// so if we want to take a full name for example we must use this method

	string yourname;

	getline(cin, yourname);

	cout << yourname << endl;



	// some time we will face a problem if the getline function comes after normal cin function " its ignored "

	// because the after entiring the first cin fun when we hit enter the getline function takes it as an input

	// to solve this probelm we use cin.ignore(1, "\n") function to ignore the enter for one time 

	int number;
	string name1, country;
	cout << "Please enter your number : \n ";
	cin >> number; 

	cin.ignore(1, '\n');

	cout << "Please enter your name : \n";
	getline(cin, name1);

	cout << " Please enter your country : \n";
	cin >> country;


	cout << " Your number is : " << number << " Your name is : " << name1 << " Your country is : " << country << endl;



}
