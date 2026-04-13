// 42- IF Statment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Enums with if statment 

enum encountrychoice {Egypt = 1, UAE = 2, Sudan = 3, Syria = 4, other = 5};


int main()
{
    
    // IF Statment 

    // we can use if else statment like in python 
    
    int x;
    
    cout << "Please enter a number :" << endl;
    cin >> x;
    if (x < 5)
    {
        cout << "Condition 1 is TRUE" << endl;
    }
    else if (x > 10 && x < 15)
    {
        cout << "Condition 2 is TRUE" << endl;
    }
    else
    {
        cout << "The condition is FALSE" << endl;
    }

    //Any code inside the main function will be executed after if statment 

    // We can use enums with if function 

    cout << "************************************** \n";
    cout << "Please enter number of your country : \n";
    cout << "(1) Egypt \n";
    cout << "(2) UAE \n";
    cout << "(3) Sudan \n";
    cout << "(4) Syria \n";
    cout << "(5) Other \n";
    cout << "************************************** \n";
    cout << "Your Choice : \n\n";

    int c;
    cin >> c; //we took an integer to take user choice 
    encountrychoice country;
    country = (encountrychoice)c; //we are converting the integer to enum value to get the specific value

    if (country == encountrychoice::Egypt)
    {
        cout << "Your country is Egypt \n ";
    }
    else if (country == encountrychoice::UAE)
    {
        cout << "Your country is UAE \n ";
    }
    else if (country == encountrychoice::Sudan)
    {
        cout << "Your country is Sudan \n ";
    }
    else if (country == encountrychoice::Syria)
    {
        cout << "Your country is Syria \n ";
    }
    else 
    {
        cout << "Wrong Entry \n ";
    }

    // The end of the program   






}

