// Problems 16 to 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Problem 16 [ Calculate Rectangle Area using hight and diagonal ]

// Same as 15 but different equation which is A = hight* sqrt(Pow(D,2)- Pow(hight,2))


// Problem 17 [ Calculate Tringle Area ] A = 1/2 ( B * H )

// Same as Before 

// Problem 18 [ Calculate Circle Area ] A = PI * Pow( R,2)

// Same as Before 

// Problem 19 [ Calculate Circle Area ] Using Diameter equation

// Same as Before 

// Problem 20 [ Calculate Circle Area Inspired by square ]

// Same as Before



float ReadsquareHight() {

	float A;
	cout << "Please Enter A Hight that is touching the Circle : \n";
	cin >> A;

	return A;
}

float CalculateCircleArea(float A) {

	const float PI = 3.14;
	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

void PrintArea(float Area) {

	cout << "Ther area of the circle is : " << Area << endl;
}





int main()
{


	PrintArea(CalculateCircleArea(ReadsquareHight()));



}

