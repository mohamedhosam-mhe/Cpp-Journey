// 60- DateTime in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma warning (disable: 4996) // this line of code will disable warning comming from this library 

#include <iostream>
#include <ctime> // this library to get the time from its C library 

using namespace std;






int main()
{


	time_t t = time(0); // this to get the time NOW

	char* dt = ctime(&t); // convert t to string form 

	cout << "Local date and time is :  " << dt << endl;


	tm* gmtm = gmtime(&t); // converting now time struct for UTC date/time [Greenwish time)

	dt = asctime(gmtm);

	cout << "UTC date and time is :  " << dt << endl;






	// ****************************************************************
	// ****************************************************************
	// ****************************************************************
	// ****************************************************************
	// ****************************************************************
	// ****************************************************************



	// DateTime Structrue 

	tm* now = localtime(&t);


		/*
		
		       This is all the functions inside tm structure 



	int tm_sec; // seconds of minutes from 0 to 61
	int tm_min; // minutes of hour from 0 to 59
	int tm_hour; // hours of day from 0 to 24
	int tm_mday; // day of month from 1 to 31
	int tm_mon; // month of year from 0 to 11
	int tm_year; // year since 1900
	int tm_wday; // days since sunday
	int tm_yday; // days since January 1st
	int tm_isdst; // hours of daylight savings time
	*/	



	// if we print values from structure using pointers we use ->


	cout << "Year: " << now->tm_year + 1900 << endl; // we added 1900  because it start counting from 1900
	cout << "Month: " << now->tm_mon + 1 << endl; // we add 1 to print correct month because it starts from 0 to 11
	cout << "Day: " << now->tm_mday << endl;
	cout << "Hour: " << now->tm_hour << endl;
	cout << "Min: " << now->tm_min << endl;
	cout << "Second: " << now->tm_sec << endl;
	cout << "Week Day (Days since sunday): " << now->tm_wday << endl;
	cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
	cout << "hours of daylight savings:" << now->tm_isdst << endl;








}
