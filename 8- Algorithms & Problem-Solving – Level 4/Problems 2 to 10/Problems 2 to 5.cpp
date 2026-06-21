// Problems 2 to 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int ReadNumber(string Message) {

    int Number;
    
    cout << Message;
    cin >> Number;

    cout << "\n";

    return Number;

}


// Problem 2 [ Leap year ]


bool LeapYear(int Year) {

    if (Year % 400 == 0) {

        return true;
    }
    else if (Year % 4 == 0 && Year % 100 != 0) {

        return true;
    }

    return false;
}



// Problem 3 [ Leap year (Oneline of code)

bool LeapYearOneLineCode(int Year) {

    // We will use ternary Operator to do this 
    return (Year % 400 == 0) ? true : (Year % 4 == 0 && Year % 100 != 0) ? true : false;

    // we also can use OR for the conditions (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0)
}



// Problem 4 [ Number of Days-Hours-Minutes-Seconds in a year ] 



void YearStatistics(int Year) {

    int Days, Hours, Minutes, Seconds;

    // Check if year is a leap year or not and adjust days
    if (LeapYear(Year))
        Days = 366;
    else
        Days = 365;

    Hours = Days * 24;
    Minutes = Hours * 60;
    Seconds = Minutes * 60;
    // Year Statistics 

    cout << "Number of Days    in Year [" << Year << "] is : " << Days << endl;
    cout << "Number of Hours   in Year [" << Year << "] is : " << Hours << endl;
    cout << "Number of Minutes in Year [" << Year << "] is : " << Minutes << endl;
    cout << "Number of Seconds in Year [" << Year << "] is : " << Seconds << endl;
}

// another solution 

// This solution is better in term of making chunks

int NumberOfDaysInYear(int Year) {

    return LeapYearOneLineCode(Year) ? 366 : 365;
}

int NumberOfHoursInYear(int Year) {

    return NumberOfDaysInYear(Year) * 24;
}

int NumberOfMinutesInYear(int Year) {

    return NumberOfHoursInYear(Year) * 60;
}

int NumberOfSecondsInYear(int Year) {

    return NumberOfMinutesInYear(Year) * 60;
}


// Problem 5 [  Number of Days-Hours-Minutes-Seconds in a Month ]


int NumberOfDaysInMonth(short Year,short Month) {

    if (Month < 1 || Month >12)
        return 0;


    if (Month == 2) {
        return LeapYearOneLineCode(Year) ? 29 : 28 ;
    }
   /* else if (Month == 1 || Month == 3 || Month == 5 || Month == 7
        || Month == 8 || Month == 10 || Month == 12) {

        return 31;
    }
    else if (Month == 4 || Month == 6 || Month == 9 || Month == 11) {

        return 30;
    }*/

    // another way of check 

    short arr31Days[7] = { 1,3,5,7,8,10,12 };

    for (short i = 1; i <= 7; i++) {

        if (arr31Days[i - 1] == Month) {
            return 31;
        }
    }

    // If all conditions are not met then its 30 days month 
    return 30;
}

int NumberOfHoursInMonth(short Year, short Month) {

    return NumberOfDaysInMonth(Year,Month) * 24;
}

int NumberOfMinutesInMonth(short Year, short Month) {

    return NumberOfHoursInMonth(Year,Month) * 60;
}

int NumberOfSecondsInMonth(short Year, short Month) {

    return NumberOfMinutesInMonth(Year,Month) * 60;
}




// Problme 6 [ Number of Days in a month short logic only 2 lines of code]



int NumberOfDaysInMonthShortLogic(short Year, short Month) {


    if (Month < 1 || Month > 12) {
        return 0;
    }

    int arrOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,31 };

    (Month == 2) ? LeapYear(Year) ? 29 : 28 : arrOfDaysInMonths[Month - 1];
}



// Problme 7 [ Day Name  at any date ]

// we will use [ Gregorian calender equation to get the day index ]


short DayIndex(short Year, short Month, short Day) {

    short a, y, m, d;

    a = (14 - Month) / 12;
    y = Year - a;
    m = Month + (12 * a) - 2;

    //Georgian : 
    // Sun = 0 , Mon = 1 , Tue = 2 .. etc..;
    d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    return d;
}

void DayName(short Year, short Month, short Day) {


    string Days[7] = {"Sun","Mon","Tue","Wed","Thur","Fri" ,"Sat" };

    short DayOrder = DayIndex(Year, Month, Day);

    cout << "Date      : " << Day << "\\" << Month << "\\" << Year << endl;
    cout << "Day Order : " << DayOrder << endl;
    cout << "Day Name  : " << Days[DayOrder];

}




// Problem 8  [ Print Month Calender ] 


void PrintMonthCalender(short Year, short Month) {

    
    string arrMonth[12] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
    string Days[7] = { "Sun","Mon","Tue","Wed","Thur","Fri" ,"Sat" };

    short DayOrder = DayIndex(Year, Month, 1);

    cout << "-----------------" << arrMonth[Month - 1] << "-----------------" << endl;

    cout << setw(3) << "Sun" << setw(3) << "Mon" << setw(3) << "Tue" << setw(3) <<
         "Wed" << setw(3) << "Thu" << setw(3) << "Fri" << setw(3) << "Sat";



}






int main()
{
    

    // Problem 2 

    int Year = ReadNumber("Enter Year to check ? ");
    if (LeapYearOneLineCode(Year)) {

        cout << "Yes, Year " << Year << " is a Leap Year" << endl;
    }
    else {
        cout << "No, Year "<< Year << " is Not Leap Year" << endl;
    }



    cout << "\n\n\n****************************************************\n\n\n";


    // Problem 3 

    // Same as 2 but with a littel adjustments 


    
    // Problem 4 


    YearStatistics(Year);


    cout << "\n Another Sol : \n";
    //anoter solution 
    cout << "Number of Days    in Year [" << Year << "] is : " << NumberOfDaysInYear(Year) << endl;
    cout << "Number of Hours   in Year [" << Year << "] is : " << NumberOfHoursInYear(Year) << endl;
    cout << "Number of Minutes in Year [" << Year << "] is : " << NumberOfMinutesInYear(Year) << endl;
    cout << "Number of Seconds in Year [" << Year << "] is : " << NumberOfSecondsInYear(Year) << endl;




    cout << "\n\n\n****************************************************\n\n\n";



    // Problem 5 


    short AnotherYear = ReadNumber("Please enter a year to check? ");
    short Month = ReadNumber("Please Enter a month to check? ");

    cout << "Number of Days    in Month [" << Month << "] is : " << NumberOfDaysInMonth(AnotherYear,Month) << endl;
    cout << "Number of Hours   in Month [" << Month << "] is : " << NumberOfHoursInMonth(AnotherYear, Month) << endl;
    cout << "Number of Minutes in Month [" << Month << "] is : " << NumberOfMinutesInMonth(AnotherYear, Month) << endl;
    cout << "Number of Seconds in Month [" << Month << "] is : " << NumberOfSecondsInMonth(AnotherYear, Month) << endl;


    cout << "\n\n\n****************************************************\n\n\n";

    // Problem 6 

    cout << "Number of Days in Month short logic is [" << Month << "] is : " << NumberOfDaysInMonthShortLogic(AnotherYear, Month) << endl;


    cout << "\n\n\n****************************************************\n\n\n";


    // Problem 7 



    short DayNameYear, DayNameMonth, DayNameDay;

    DayNameYear = ReadNumber("Please enter a year? ");
    DayNameMonth = ReadNumber("\nPlease enter a month? ");
    DayNameDay = ReadNumber("\nPlease enter a day? ");

    DayName(DayNameYear, DayNameMonth, DayNameDay);

    cout << "\n\n\n****************************************************\n\n\n";


    // Problem 8 


    PrintMonthCalender(Year, Month);



}
