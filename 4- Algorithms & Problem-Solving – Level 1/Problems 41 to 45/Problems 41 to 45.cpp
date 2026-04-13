// Problems 41 to 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



// Problem 41 [ Weeks and days ] Number of hours to weeks and days 

float ReadPositiveNumbre(string Message) {


	float Number;
	cout << Message << endl;
	
	cin >> Number; 

	if (Number < 0)

		Number = ReadPositiveNumbre("Please Enter a Positive Number : \n");

	
	return Number;
}

float CalculateDays(float Hours) {

	float Days = Hours / 24;

	return Days;
}

void PrintDaysAndWeeks(float Hours, float Days) {

	cout << Hours << " Hours are : " << Days << " Day \n";
	cout << Days << " Days are : " << Days / 7 << " Week \n";
}


// ****************************************************

// Problem 42 [ Task Duration in seconds ] 

struct stTiming {

	float Days;
	float Hours;
	float Minutes;
	float Seconds;
};

stTiming GetDurationTiming() {

	stTiming DurationTiming;

	DurationTiming.Days = ReadPositiveNumbre("Please Enter How many Days :  \n");
	DurationTiming.Hours = ReadPositiveNumbre("Please Enter How many Hours :  \n");
	DurationTiming.Minutes = ReadPositiveNumbre("Please Enter How many Minutes :  \n");
	DurationTiming.Seconds = ReadPositiveNumbre("Please Enter How many Seconds :  \n");

	return DurationTiming;
}

float CalculateDaysToSeconds(stTiming DurationTiming) {

	return DurationTiming.Days * 24 * 60 * 60;
}
float CalculateHoursToSeconds(stTiming DurationTiming) {

	return DurationTiming.Hours * 60 * 60;
}
float CalculateMinutesToSeconds(stTiming DurationTiming) {

	return DurationTiming.Minutes * 60;
}

void PrintDurationToSeconds(stTiming DurationTiming) {

	float CalculatedSeconds = CalculateDaysToSeconds(DurationTiming) + CalculateHoursToSeconds(DurationTiming) +
		CalculateMinutesToSeconds(DurationTiming) + DurationTiming.Seconds;

	cout << "The Duration in Seconds is : " << CalculatedSeconds << endl;
}

// Problem 43 [ Seconds To Days and Hours and minutes and Seconds

stTiming SecondsToTaskDuration(int TotalSeconds) {

	stTiming SecondsToTaskDuration;

	int HourInSeconds = 60 * 60;
	int MinuteInSeconds = 60;
	int DayInSeconds = 24 * 60 * 60;

	int Reminder = 0;

	SecondsToTaskDuration.Days = floor(TotalSeconds / DayInSeconds);
	Reminder = TotalSeconds % DayInSeconds;
	SecondsToTaskDuration.Hours = Reminder / HourInSeconds;
	Reminder = Reminder % HourInSeconds;
	SecondsToTaskDuration.Minutes = Reminder / MinuteInSeconds;
	Reminder = Reminder % MinuteInSeconds;
	SecondsToTaskDuration.Seconds = Reminder;

	return SecondsToTaskDuration;
}

void PrintSecondsToTaskDuration(stTiming SecondsToTaskDuration) {

	cout << SecondsToTaskDuration.Days << " Days. \n";
	cout << SecondsToTaskDuration.Hours << " Hours \n";
	cout << SecondsToTaskDuration.Minutes << " Minutes \n";
	cout << SecondsToTaskDuration.Seconds << " Seconds \n";
}

// Problem 44 [ Day of Week ] 

string GetDayName(int DayNumber) {

	switch (DayNumber) {

		case 1:
			return "Saturday";
		case 2: 
			return "Sunday";
		case 3:
			return "Monday";
		case 4: 
			return "Tuesday";
		case 5:
			return "Wednsday";
		case 6:
			return "Thursday";
		case 7: 
			return "Friday";
		default: 
			return "You entered a wrond day number!";
	}
}

void PrintDayName(string DayName) {

	cout << DayName << endl;
}

// Problem 45 [ Month of Year ] same as before abuHadhoud way 


enum MonthsofYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, 
	Sep = 9, Oct = 10, Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To) {

	int Number; 
	do {
		
		cout << "Please enter month number  ( 1 - 12 ): \n";
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

MonthsofYear GetMonthNumber() {
	
	return (MonthsofYear)ReadNumberInRange("Please Enter Month Number : ( 1 - 12 ) \n",1,12);
}

string GetMonthName(MonthsofYear MonthNumber) {

	switch (MonthNumber) {
		
		case MonthsofYear::Jan:
			return "January";
			break;
		case MonthsofYear::Feb:
			return "Febrory";
			break;
		case MonthsofYear::Mar:
			return "March";
			break;
		case MonthsofYear::Apr:
			return "April";
			break;
		case MonthsofYear::May:
			return "May";
			break;
		case MonthsofYear::Jun:
			return "June";
			break;
		case MonthsofYear::Jul:
			return "July";
			break;
		case MonthsofYear::Aug:
			return "August";
			break;
		case MonthsofYear::Sep:
			return "September";
			break;
		case MonthsofYear::Oct:
			return "October";
			break;
		case MonthsofYear::Nov:
			return "November";
			break;
		case MonthsofYear::Dec:
			return "December";
			break;

						
	}
}

int main()
{

	// Problem 41 

	float Hours = ReadPositiveNumbre("Please Enter How many Hours : ");

	PrintDaysAndWeeks(Hours, CalculateDays(Hours));


	// Problem 42 
	stTiming DurationTiming = GetDurationTiming();

	PrintDurationToSeconds(DurationTiming);

	cout << "************************************************** \n";

	//Problem 43 

	int TotalSeconds = ReadPositiveNumbre("Please Enter Total Seconds : ");
	PrintSecondsToTaskDuration(SecondsToTaskDuration(TotalSeconds));

	//Problem 44 

	int DayNumber = ReadPositiveNumbre("Please Enter Day Number ( 1 - 7 ) : \n");
	PrintDayName(GetDayName(DayNumber));

	// Problem 45


	cout << GetMonthName(GetMonthNumber()) << endl;

	
}

