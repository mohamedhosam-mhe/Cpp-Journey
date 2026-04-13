\

// 26- Math Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> // We must include the cmath library to use the math functions
using namespace std;


int main()
{
    // squre root [sqrt]
    cout << sqrt(64) << endl;

    // round of number 

    cout << round(3.5) << endl;

    //we can use nested functions

    cout << "This is nested fuctions :" << round(sqrt(74))<< endl;

    // power function pow( base, power)

    cout << pow(2, 3) << endl;


    // ceil and floor functions [ Like round but we decide which way direction of rounding by our selfs ]

    // ceil for rounding up and floor for rounding down 

    cout << ceil(2.1) << " and"<< floor(2.9) << endl;

    // absolute value [ remove negative sign ] abs

    cout << abs(-2) << endl;


    //There are tons of math functions we can find in https://en.cppreference.com/w/cpp/header/cmath


    // Homework rectangle problem

    int a = 5;
    int d = 40;

    double area;

    area = a * sqrt(pow(d, 2) - pow(a, 2));

    cout << "The Area of the rectangle is : " << area << endl;



    
}

