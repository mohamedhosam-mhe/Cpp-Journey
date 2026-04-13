// 45- Switch case.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

enum enWeekDays {Satur = 1, Sun =2, Mon =3, Tues =4, Wed =5,Thur =6, Fri =7};


void ShowWeekDaysMenu() {

	cout << "***************************************** \n";
	cout << "\tWeek Day Menu \n";
	cout << "***************************************** \n";
	cout << "1: Saturday \n";
	cout << "2: Sunday \n";
	cout << "3: Monday \n";
	cout << "4: Tuesay \n";
	cout << "5: Wednsday \n";
	cout << "6: Tursday \n";
	cout << "7: Friday \n";
	cout << "***************************************** \n";
	cout << "Please Enter the number of day : \n\n";
}

enWeekDays ReadWeekDays() {

	//enWeekDays WeekDay;
	int wd;
	
	cin >> wd;
	

	return (enWeekDays)wd;

}

string GetWeekDayName(enWeekDays WeekDay) {

	switch (WeekDay) {

	case enWeekDays::Satur :
		return "Saturday \n";
		break;
	case enWeekDays::Sun :
		return "Sunday \n";
		break;
	case enWeekDays::Mon:
		 "Monday \n";
		break;
	case enWeekDays::Tues:
		return "Tuesday \n";
		break;
	case enWeekDays::Wed:
		return "Wednsday \n";
		break;
	case enWeekDays::Thur:
		return "Tursday \n";
		break;
	case enWeekDays::Fri:
		return "Friday \n";
		break;
	default :
		return "This is not a Day Name \n";
		break;
	}
	

	
}

int main()
{
	// Switch case 

	int day = 4;

	switch (day) {

	case 1 : // 1 can be changed to any value here we want the value equal 1
		cout << "Saturday \n "; // this is what will be executed if the case is TRUE
		break; // This breakes the switch case and end it,, without it the rest cases will be executed unless it finds another break
	case 2 :
		cout << "Sunday \n ";
		break;

	case 3:
		cout << "Monday \n ";
		break;
	case 4:
		cout << "Tuesday \n ";
		break;
	case 5:
		cout << "Wednesday \n ";
		break;
	case 6:
		cout << "Thursday \n ";
		break;
	case 7:
		cout << "Friday \n ";
		break;
	default :
		cout << "You entered a wrong day \n";
		break;
	}


	// This is a project video 46  (Nested functions)


	ShowWeekDaysMenu();
	cout << "Today is : " << GetWeekDayName(ReadWeekDays()) << endl;

}

