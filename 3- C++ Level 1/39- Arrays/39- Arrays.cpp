// 39- Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


// making functions to read and print an array 
// when we want to modify an array in a function it already called by reference [ NO NEED FOR & ]

void ReadGradeData(float y[3])
{
    
    cout << "Please enter first grade : " << endl;
    cin >> y[0];
    cout << "Please enter second grade : " << endl;
    cin >> y[1];
    cout << "Please enter third grade : " << endl;
    cin >> y[2];
    cout << "************************************" << endl;

    
}

float AvgGradeData(float y[3])
{
    float avg = (y[0] + y[1] + y[2]) / 3;

    return avg;
}
/////////////////////////////////////////////////////////////////////////
// /////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
// Project 
// while we can make array of chars or integers we can make array of structs

struct strPerson {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadPersonData(strPerson &Person)
{
    cout << "Please enter your first name : " << endl;
    cin >> Person.FirstName;
    cout << "Please enter your last name : " << endl;
    cin >> Person.LastName;
    cout << "Please enter your age : " << endl;
    cin >> Person.Age;
    cout << "Please enter your phone number : \n ";
    cin >> Person.Phone;
}

void PrintPersonData(strPerson Person)
{
    
    cout << "******************************************* \n";
    cout << "First Name : " << Person.FirstName << endl;
    cout << "Second Name : " << Person.LastName << endl;
    cout << "Age : " << Person.Age << endl;
    cout << "Phone Number : " << Person.Phone << endl;
    cout << "******************************************* \n";
}

void ReadNoPerson(strPerson NoPerson[2])
{
    ReadPersonData(NoPerson[0]);
    ReadPersonData(NoPerson[1]);
}

void PrintNoPerson(strPerson NoPerson[2])
{
    PrintPersonData(NoPerson[0]);
    PrintPersonData(NoPerson[1]);
}


int main()
{
    // Arrays in c++ 

    // x[number of data in the array ]
    int x[5] = { 1,2,3,4,5 };
    
    cout << x[0] << endl; //1
    cout << x[4] << endl; //2

    float dat[4];

    cout << "please enter Grade 1 : \n ";
    cin >> dat[0];
    cout << "please enter Grade 2 : \n ";
    cin >> dat[1];
    cout << "please enter Grade 3 : \n ";
    cin >> dat[2];

    float result = (dat[0] + dat[1] + dat[2]) / 3;
    cout << "************************************" << endl;
    cout << "The avearge of grades is : " << result << endl;


    // Now we will call our data that in the function 


    float y[3];

    ReadGradeData(y);
    cout << "Your avg grade is : " << AvgGradeData(y) << endl;


    ///////////////////////////////////////////////////////////////////////////////////

    //we will make a project contain structs with functions with arrays

    /*strPerson Person1;
    ReadPersonData(Person1);
    PrintPersonData(Person1);*/
    
    strPerson NoPerson[2];
    ReadNoPerson(NoPerson);
    PrintNoPerson(NoPerson);
}

