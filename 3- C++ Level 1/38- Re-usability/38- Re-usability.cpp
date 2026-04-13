// 38- Re-usability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 


struct  strInfo {

    string FirstName;
    string LastaName;
    int Age;
    string Phone;
};


void ReadInfo(strInfo &Info)
{

    // we will use this function to read person information and we used & to
    // apply changes in the struct not only with in the function becaue we will use 
    // these information in other print procedure, so we want the effect of this procedure to appear

    cout << "Enter your first name :  \n";
    cin >> Info.FirstName;

    cout << "Enter your last name : \n";
    cin >> Info.LastaName;

    cout << "Enter your age : " << endl;
    cin >> Info.Age;

    cout << "Enter your phone number : \n ";
    cin >> Info.Phone;

}

void PrintInfo(strInfo Info)
{

    cout << "**************************************" << endl;

    cout << "First Name : " << Info.FirstName << endl;

    cout << "Last Name : " << Info.LastaName << endl;

    cout << "Age : " << Info.Age << endl;

    cout << "Phone number : " << Info.Phone << endl;

    cout << "**************************************" << endl;


}




int main()
{
    

    // Now only if we want to take a person data only call those funcunctions 

    strInfo Person1; // make an object of the struct 
    ReadInfo(Person1);  // Reading person info
    PrintInfo(Person1); // printing person info


    // Now if I want to take another person data i dont nead to type any code just use the same procdures

    strInfo Person2;
    ReadInfo(Person2);
    PrintInfo(Person2); // Simply like this 
    

}

