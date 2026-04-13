// 32- Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


void myfunction()
{
    cout << "This is my first function in c++ " << endl;
}

void myfunction2()
{
    cout << "This is my second function in c++ \n";
}

void information()
{
    cout << "******************************************** \n";
    cout << " Name : Mohamed Hosam Eldin" << endl;
    cout << " Age : 27 Years \n";
    cout << " City : Minya \n";
    cout << " Country : Egypt \n";
    cout << "******************************************** \n";

}

// when creating functions void used for procedure functions that dosent return any values
// we can make normal function like main it returns a value 

int MySumFunction()
{

    int fnumber, snumber;

    cout << "Please enter Number 1 ? \n ";
    cin >> fnumber;
    cout << "Please enter Number 2 ? \n ";
    cin >> snumber;
     
    return fnumber + snumber;
}

void MySumProcedure()
{
    int number1, number2;
    cout << "Please enter Number 1 ? \n ";
    cin >> number1;
    cout << "Please enter Number 2 ? \n ";
    cin >> number2;

    cout << "************************************** \n";
    cout << number1 + number2 << endl;
                
}


// Now we can use parameters in our functions 

int MySumFunction1(int fnumber1, int snumber1)
{

    return fnumber1 + snumber1;
}

int main()
{

  /*  myfunction();
    myfunction2();
    information();*/

    MySumProcedure();

    
    cout << MySumFunction() << endl;

    // As the function has a data type we can manipulate it 

    cout << MySumFunction() + 30 << endl;

    cout << MySumFunction() / 2 << endl;


    // we can store it in a variable 

    int Result = MySumFunction();


    // using our function with parameter like normal functions like floor (x)


    cout << "This is the result of parameter with function : " << MySumFunction1(10, 20) << endl;
     

    


}

