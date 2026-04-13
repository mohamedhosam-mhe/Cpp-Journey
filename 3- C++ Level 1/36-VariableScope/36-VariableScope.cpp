// 36-VariableScope.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


// Any variable typed here is considered a global variabel and we can access it  
// from other functions by using :: before variable name 

int x = 1000; 



// any variable inside any function is a local variable for this specific function

// That means we can use the same variable name more that one time inside different function

// The variables scope ends when the function exected and destroyed  from memory 
// only the global variabels can be used in any function 


void myfunction()
{

    int x = 100;

    cout << "This is X value from myfunction : " << x << endl;

}




// When using parameters we can assign them by value or by reference


void myfunction2(int &A)
{
    A = 500; // we modified A to be 500 

    cout << " This is A value inside the function : " << A << endl;


}

int main()
{

    int x = 500;

    cout << "This is X value from main function : " << x << endl;

    myfunction();

    cout << "This is X value from global scope : " << ::x << endl;


    //We also can make adjustments on the global variable within any function

    ::x++;
    ::x = ::x * 10;

    cout << "This is a modification on the global variable : " << ::x << endl;

    

    cout << "***********************************************************" << endl;

    // when we use A inside the function it takes a copy of A and modify it in the function 
    // The original A is not totched, so if we want the modification of it in the function 
    // appear in the main function we use (int &A) inide function parameter 
    // This will locate the adress of A variable in memory and effect it directly 

    // This will help us if we do for example swap function that takes 2 parameters and swap them
    // we want the effect of the function to be applied on main so we use &
    int A;

    A = 100;

    myfunction2(A);

    cout << "This is value of A inside the main function after excuting the function : " << A << endl;



}

