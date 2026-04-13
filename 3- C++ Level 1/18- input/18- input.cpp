// 18- input.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";

    // User input using cin 

    string user_name;
    int user_age;

    cout << "Please Enter your name : " << endl;
    cin >> user_name;
    cout << "Please Enter your age :" << endl;
    cin >> user_age; 

    cout << "Your name is\t:" << user_name << " Your age is\t:" << user_age << endl;

    // There are sizes to the data types 
    // Ther is signed and unsigned paramerter for int, char, double
    // unsigned means that no minus numbers ,so the ranges will double in int in example


    // All Values are signed by default
    int v1; 
    signed int v2; //same as int 

    unsigned int v3; // not accepting minus values

    short int v4; // Takes 2 bytes only [ for ages and numbers until 34000]
    short v5; // same as short int

    unsigned short v6; // not accepting minus valuse and the range doubled to around 64000 


    long int v7; 
    long long v8; // up-to 12 bytes

    long double v9;

    unsigned char v10; 

    double distance = 45E12; // means to the power of 12

    // if we want to know the exact size we can use size of function 

    cout << " The size of short is : " << sizeof(short) << endl;
    cout << " The size of long lond is : " << sizeof(long long) << endl;

    // if we want know the ranges we can use some constant values 

    cout << "short int range ( " << SHRT_MIN << "," << SHRT_MAX << " )" << endl;
    cout << "unsigned short int range ( " << 0 << "," << USHRT_MAX << " )" << endl;

    // We can search for the other ranges 
  



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
