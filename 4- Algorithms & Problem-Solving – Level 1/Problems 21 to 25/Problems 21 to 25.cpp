// Problems 21 to 25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// From Problem 21 to 23 is the same as before but with different equations 


// Problem 24 [ validate age between 2 numbers ]

int ReadAge() {
    
    int Age; 

    cout << "Please Enter Your Age : " << endl;
    cin >> Age;

    return Age;
}

bool ValidateAgeBetweenTwoNumbers(int Age, int From, int To) {

    if (Age >= From && Age <= To)
        return true;
    else
        return false;
}

void PrintResult(int Age) {

    if (ValidateAgeBetweenTwoNumbers(Age, 18, 60))

        cout << "This is validate age \n";
    else
        cout << "This is invaled age \n";
    


}

//****************************************************

// Problem 25 [ Same as 24 but make the user eneter numbers until he is in the range

int ReadAg() {

    int Age;

    cout << "Please Enter Your Age : " << endl;
    cin >> Age;

    return Age;
}

bool ValidateAgeBetweenTwoNumber(int Age, int From, int To) {

    if (Age >= From && Age <= To)
        return true;
    else
        return false;
}

int RebeetUntilBeInRange(int From, int To) {

    int Age = 0;

    do {
        Age = ReadAg();

    } while (!ValidateAgeBetweenTwoNumber(Age, From, To));

    return Age;
}

void PrintResults(int Age) {

    cout << "Your Age is : " << Age << endl;



}




int main()
{
    // Problem 24
    PrintResult(ReadAge());

    cout << "******************************************** \n ";

    //Problem 25

    PrintResults(RebeetUntilBeInRange(18, 25));


}

