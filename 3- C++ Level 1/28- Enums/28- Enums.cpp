// 28- Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum Colour{Red=100, Green=200,Blue=300, Purple=400}; 
enum Direction{North, East, South, West};
enum Days{Sat, Sun, Tue, Wed, Thu, Fri};
enum Gender{Male, Female};

// The returning values of the enums is a label [ number of the word in the enum]
// This can help us when dealing with conditional statments like [if statment] when comparing values
// We can assign specific value for any of the data in enums like in the first enum

int main()
{
    //What is enums
    //Like lists stores data and numbering it with order starts from 0

    Colour MyColour,MyColour1;
    Direction MyDirection;
    Days MyDays;
    Gender MyGender;



    MyColour = Colour::Green;
    MyColour1 = Colour::Purple;
    MyDirection = Direction::North;
    MyDays = Days::Sun;
    MyGender = Gender::Male;
    cout << MyColour <<" \n"; //The output is 1 [ its order in the enum ] but we assigned new value in the enum data it will be 200
    cout << MyColour1 << "\n";
    cout << MyDirection << "\n";
    cout << MyDays << endl;
    cout << MyGender << endl;


}

