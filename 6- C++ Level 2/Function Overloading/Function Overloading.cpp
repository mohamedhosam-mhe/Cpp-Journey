// Function Overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// Function overloading [ type of Polymorphism ] that allow a single function name to called to different functions with condition of having different parameters 



int MySum(int a, int b) {

    return a + b;
}

double MySum(double a, double b) {

    return a + b;
}

int MySum(int a, int b, int c) {

    return a + b + c;
}

int MySum(int a, int b, int c, int d) {

    return a + b + c + d;
}

int main()
{

    // when we try to call MySum Function the IDE will decide which function you actually need based on your givin arguments 

    // We can see all available functions when we type function name it will show directly 1 Of 4 or 1 of number of functions under that name we can see what arguments they need 



    cout << MySum(12.1, 10.5) << endl;

    cout << MySum(12, 10) << endl;

    cout << MySum(12, 10, 8) << endl;
    
    cout << MySum(12, 10, 8,10) << endl;








}

