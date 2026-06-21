// Problems 11 to 15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



// we will use some of the functions of previous problems 

int ReadNumber(string Message) {

    int Number;

    cout << Message;
    cin >> Number;

    cout << "\n";

    return Number;

}



bool LeapYearOneLineCode(int Year) {

    // We will use ternary Operator to do this 
    return (Year % 400 == 0) ? true : (Year % 4 == 0 && Year % 100 != 0) ? true : false;

    // we also can use OR for the conditions (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0)
}



int NumberOfDaysInMonthShortLogic(short Year, short Month) {


    if (Month < 1 || Month > 12) {
        return 0;
    }

    int arrOfDaysInMonths[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

    (Month == 2) ? LeapYearOneLineCode(Year) ? 29 : 28 : arrOfDaysInMonths[Month - 1];
}




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



short NumberOfDaysFromTheBeginningOfTheYear(short Year, short Month, short Day) {


    // Count Previous Months days until reaching our month

    short Counter = 0;
    for (int i = 1; i < Month; i++) {

        Counter += NumberOfDaysInMonthShortLogic(Year, i);

    }


    // add number of days also on counter to get current day number 

    Counter += Day;


    return Counter;


}




// Problem 11 [ Opposite of problem 10 we will take the number of days and return a date ]


short MonthNumberOfDays(short NumberOfDays, short Year, short & Counter) {


    for (int i = 1; i <= 12; i++) {

        Counter += NumberOfDaysInMonthShortLogic(Year, i);

        if (Counter >= NumberOfDays) {
            Counter -= NumberOfDaysInMonthShortLogic(Year, i);
            return i ;
        }
    }

    return 0;
}

void  DateOfNumberOfDays(short NumberOfDays, short Year) {
    
    short DaysCounterUntilMonthBefore = 0;
    short MonthNumber = MonthNumberOfDays(NumberOfDays, Year,DaysCounterUntilMonthBefore);
    //short NumberOfDaysInThisMonth = NumberOfDaysInMonthShortLogic(Year, MonthNumber);

    short DayNumber = NumberOfDays - DaysCounterUntilMonthBefore;

    printf("Date for [%d] is : %d/%d/%d \n", NumberOfDays, DayNumber, MonthNumber, Year);
}




// Problem 12 [ Add Days to date ]






int main()
{


    // Problem 11 

    system("cls");
    cout << "\n\n-------------------Prolem 11 -----------------\n\n";


    short CDay, CMonth, CYear;

    CDay = ReadNumber("Please Enter Day To Count?  ");
    CMonth = ReadNumber("Please Enter Month?  ");
    CYear = ReadNumber("Please Enter Year?  ");

    short NumberOfDays = NumberOfDaysFromTheBeginningOfTheYear(CYear, CMonth, CDay);

    cout << "Number of Days from the beginning of the year is : " << NumberOfDays << endl;


    // Now if we give a function number of days it can return the date and it must be the same as we entered


    DateOfNumberOfDays(NumberOfDays, CYear);


    system("pause");


    // Problem 12 






}
