#pragma once


#include <iostream>

using namespace std;

namespace MyLib
{

	void PrintArrayElemnents(int Array[100], int ArrayLength) {


		cout << "[ ";

		for (int i = 0; i < ArrayLength; i++) {

			cout << Array[i] << " ";
		}

		cout << "]" << endl;
	}


	int Sum2Numbers(int Num1, int Num2) {

		return Num1 + Num2;
	}



}
