// 20- Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Problem No. 7 
    int hnum;
    cout << "Please Enter a number : " << endl;
    cin >> hnum; 
    cout << "The half of this number is : " << hnum / 2 << endl;

    //problem No. 9

    int num1, num2, num3;

    cout << "Please Enter First number : \n";
    cin >> num1;
    cout << "Please Enter Second number : \n";
    cin >> num2;
    cout << "Please Enter Third number : \n";
    cin >> num3;
    
    int sum = num1 + num2 + num3;

    cout << " The sum of the three numbers is : " << sum << endl;


    // problem No.10
    int num4, num5, num6;

    cout << "Please Enter First number : \n";
    cin >> num4;
    cout << "Please Enter Second number : \n";
    cin >> num5;
    cout << "Please Enter Third number : \n";
    cin >> num6;

    int sum1 = num4 + num5 + num6;

    float avg = sum1 / 3;

    cout << " The average of the three numbers is : " << avg << endl;

    // problem No. 31

    int pnum; 
    cout << "Please Enter a number : " << endl;
    cin >> pnum; 
    
    cout << "Number to the power of 2 =  " << pnum * pnum <<endl; 
    cout << "Number to the power of 3 =  " << pnum * pnum * pnum << endl;
    cout << "Number to the power of 4 =  " << pnum * pnum * pnum * pnum << endl;


    // problem 48

    cout << "Welcome to istllment calculator" << endl; 
    float pay, cost, month;

    cout << "Please Enter the total amout of money : " << endl;
    cin >> cost;
    cout << "How many months you want to make the installment? " << endl; 
    cin >> month;
    cout << "The amout you will pay every month is : " << cost / month << "$ \n thank you for using our progrm" << endl;







                    

}

