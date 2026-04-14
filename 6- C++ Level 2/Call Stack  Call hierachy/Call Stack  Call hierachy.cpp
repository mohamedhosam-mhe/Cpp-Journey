
// Call Stack  Call hierachy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void Function4() {

	cout << "Hello From Function 4 " << endl;
}

void Function3() {

	Function4();
}

void Function2() {

	Function3();
}

void Function1() {

	Function2();
}



int main()
{



	Function1();  // We must notice that funcrtion 1 is executing what function 4 do,so if we want to know the calling stack or calling hierachy


					// We can right click in function 4 and select [View Call Hierachy / View Call Stack ] 

					// We can see now the call to that function [ Who called it ] Or call From that function [ What this function called ] inside its body


}

