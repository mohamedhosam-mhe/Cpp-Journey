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


// structure to store all date information

struct stDate {

    short Day;
    short Month;
    short Year;
};  

// function to read the date from the user and store it in a struct
stDate ReadFullDate() {

    stDate Date;

    Date.Day = ReadNumber("Pleas Enter a Day? ");
    Date.Month = ReadNumber("Please Enter a Month? ");
    Date.Year = ReadNumber("Please Enter a Year? ");

    return Date;
} // 

// Function to add the givin Days user wants to add and add it to the givin date 
stDate AddDaysToDate(short Days, stDate Date) {

    // First We want to know how many days left from the beggining of the year 
    short DaysFromBegginingOfYear = NumberOfDaysFromTheBeginningOfTheYear(Date.Year, Date.Month, Date.Day);

    // We Will Add The Days From the beggining of the year to givin date to start from 1/1/Year

    short NewDays = DaysFromBegginingOfYear + Days;

    Date.Month = 1;
    Date.Day = 1;


    while (true) {

        if (NumberOfDaysInMonthShortLogic(Date.Year, Date.Month) < NewDays) { // Check if the full days is less that one month days we will be at the right month

            NewDays -= NumberOfDaysInMonthShortLogic(Date.Year, Date.Month); // remove months days from total days

            Date.Month++; // Move to next month

            if (Date.Month > 12) { // if month reach 12 (December) 
                Date.Month = 1;    // Move Back to 1 (January)
                Date.Year++;       // Add Another year to years
            }
            
        }
        else {

            Date.Day = NewDays; // add remaining days that is less than a month to days 
            
            break; // Exit the loop
        }

    }


    return Date;
}











// Problem 13 [ Date 1 Less than Date 2 (Check if Date 1 is less that Date 2 ]



bool CheckDate1LessDate2(stDate Date1, stDate Date2) {


    return (Date1.Year < Date2.Year) ? true : (Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month) ? true : (Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) ? true : false : false : false ;


}




// Problem 14 [ Date 1 is equal Date 2 ] 


bool CheckDate1EqualDate2(stDate Date1, stDate Date2) {


    return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month) ? (Date1.Day == Date2.Day) ? true : false : false : false;


}





// Problem 15 [ Check is this day last day of the month and is this month last month of the year ]

bool CheckIsDayLastDayInMonth(stDate Date) {

    short DaysInThisMonth = NumberOfDaysInMonthShortLogic(Date.Year, Date.Month);

    return (Date.Day == DaysInThisMonth);

}

bool CheckIsLastMonth(stDate Date) {

    return (Date.Month == 12);
}



// Problem 16 [ Increase date by 1 day ]


stDate IncreaseDatebyOneDay(stDate Date) {

   

    if (CheckIsDayLastDayInMonth(Date)) {


        if (CheckIsLastMonth(Date)) {

            Date.Day = 1;
            Date.Month = 1;
            Date.Year = Date.Year + 1;
        }
        else {

            Date.Day = 1;
            Date.Month = Date.Month + 1;
        }

    }
    else {

        Date.Day++;
        
    }

    return Date;
}




// Problem 17 [  Differince between 2 dates in days ]

// important note date 1 must be less than date 2 


short DifferinceBetweenDates(stDate Date1, stDate Date2) {


    if (CheckDate1LessDate2(Date1, Date2)) { // Date 1 must be less than date 2


        if (CheckDate1EqualDate2(Date1, Date2)) { // Check if the dates are equal 

            return 0;
        }
















    }



}


















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


    system("cls");
    cout << "\n\n-------------------Prolem 12 -----------------\n\n";


    stDate Date = ReadFullDate();

    short DaysToAdd = ReadNumber("Please Add How Many Days you want to add? ");

    Date = AddDaysToDate(DaysToAdd, Date);

    cout << "Date After Adding [" << DaysToAdd << "] days is : ";
    cout << Date.Day << "/" << Date.Month << "/" << Date.Year << endl;


    system("pause");


    //Problem 13 

    system("cls");
    cout << "\n\n-------------------Prolem 13 -----------------\n\n";


    stDate Date1, Date2;
    cout << "Date 1: \n";
    Date1 = ReadFullDate();
    cout << "\n\nDate 2: \n";
    Date2 = ReadFullDate();


    if (CheckDate1LessDate2(Date1, Date2)) {

        cout << "Yes, Date1 is less than Date2.\n";
    }
    else {

        cout << "No, Date1 is NOT less than Date2.\n";
    }


    system("pause");



    // Problem 14 


    system("cls");
    cout << "\n\n-------------------Prolem 14 -----------------\n\n";


    if (CheckDate1EqualDate2(Date1, Date2)) {

        cout << "\nYes, Date1 is equal Date2.\n";
    }
    else {

        cout << "\nNo, Date1 is NOT equal Date2.\n";

    }


    system("pause");





    // Problem 15


    system("cls");
    cout << "\n\n-------------------Prolem 15 -----------------\n\n";



    stDate  Date15 = ReadFullDate();


    if (CheckIsDayLastDayInMonth(Date15)) {  // Day Check

        cout << "\nYes, This Day is the last day in month.\n";
    }
    else {

        cout << "\nNo, This Day is NOT last day in month.\n";
    }

    if (CheckIsLastMonth(Date15)) { // Month Check


        cout << "\nYes, This Month is the last Month in year.\n";

    }
    else {

        cout << "\nNo, This Month is NOT the last Month in year.\n";

    }

    system("pause");


    // Problem 16 


    system("cls");
    cout << "\n\n-------------------Prolem 16 -----------------\n\n";

    stDate Date16 = ReadFullDate();

    Date16 = IncreaseDatebyOneDay(Date16);

    cout << "Date after adding one day is: ";
    cout << Date16.Day << "/" << Date16.Month << "/" << Date16.Year << endl;




    // Problem 17 




}
