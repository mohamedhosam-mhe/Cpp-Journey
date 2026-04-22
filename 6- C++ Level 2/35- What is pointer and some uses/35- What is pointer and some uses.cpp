// 35- What is pointer and some uses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



struct stEmployee {

	string Name;
	int Salary;
};






int main()
{
	// What is pointers ?

	// Simply Pointer is a variable that can ONLY stores other variables address [ From Same Type ] 

	// To declare a pointer we type the type and * after this pointer name 


	int a = 10;

	cout << "This is a value : " << a << endl;
	cout << "This is a address : " << &a << endl;


	int* p = &a; // Pointer decleration . [ ONLY Stores Adress ] // Called make reference or References 

	cout << "This is pointer value : " << p << endl;

	int b = 30;

	p = &b; // we can also modify it like normal variable but again its only accepts adresses

	cout << "This is b value : " << b << endl;
	cout << "This is b adress : " << &b << endl;

	cout << "Pointer address after changing adress value  : " << p << endl;


	cout << "**********************************************\n\n\n\n";


	//*******************************************************************
	//*******************************************************************
	//*******************************************************************
	//*******************************************************************
	//*******************************************************************

	

	// Pointer Dereferencing 

	// if we want to print the value if the reference that the pointer stores and modify it we can use * before pointer name


	int x = 100;

	cout << "This is the value of x : " << x << endl;

	int* p2 = &x;

	cout << "This is the reference of x inside pointer p2 : " << p2 << endl;

	cout << "This is the value of the reference in pointer p2 : " << *p2 << endl;


	// Now if we change the value of *p2 pointer the value of x will also changed because both of them pointing to the same location


	*p2 = 150;

	cout << "The value of x Now : " << x << endl;

	cout << "The value of pointer : " << *p2 << endl;

	// IMPORTANT : Reference different than pointer 
	// 
	// Reference : make another name to the same location [ only can be assigned to one location ] a=10; b= &a; [b only can't store any other locations or accept modifying ]

	// pointer : make new variable that have its own location but stores another variable location in it  [ can be assigned to any other variables locations ]



	cout << "**********************************************\n\n\n\n";



	// Pointers with array 

	// We know that the array is a group of variable of the same type 
	// every variable in array has its own location in memory 


	int arr[5] = { 10,20,30,40,50 };

	int* ptr = arr; // as we remember arrays are dealing with reference directlry so no need for &


	// printint locations of every item using pointers

	cout << ptr << "  This prints the first item in the array " << endl;
	cout << ptr + 1 << "   this is the second item and so on " << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;
	cout << ptr + 4 << endl;

	cout << "\n\n";
	// we can also print the values through the pointers [ we will use for loop for this ]

	for (int i = 0; i < 5; i++) {

		cout << *(ptr + i) << endl;  // * is like encryption key we use it to get the value of the address 
	}
	

	cout << "\n\n";

	// pointers with structures 


	stEmployee Employee1, * stptr;


	Employee1.Name = "Mohamed Hosam";
	Employee1.Salary = 10000;


	cout << Employee1.Name << endl;
	cout << Employee1.Salary << endl;


	stptr = &Employee1;

	cout << "\nPrinting using pointer : \n\n";

	cout << stptr->Name << endl; // we use -> to access structure value from pointer 
	cout << stptr->Salary << endl;




	//*******************************************************************
	//*******************************************************************
	//*******************************************************************
	//*******************************************************************
	//*******************************************************************

	cout << "\n\n";



	// Generic pointer 

	// As we know that pointers can store adressses from the same type and when modifying it we must modify to the same type 

	// We can make a generic pointer [ void pointer ] that can store any type and can be modified to any different types 

	// but when we will print the values of it we must assign its value type using *(static_cast<type*> (pointer name)) .



	void * ptr2; // generic pointer 


	int intNum = 50;

	float floatNum = 10.5;



	ptr2 = &floatNum;

	cout << ptr2 << endl;


	cout << *(static_cast <float*> (ptr2)) << endl;


	ptr2 = &intNum;

	cout << *(static_cast <int*> (ptr2)) << endl;

	// if we tried to print void pointer direct it will give an error , becaues void just only stores adress without knowing the value of that adress


	// So, if we want to print the value of this adrress we must tell the compiler what is the adress type to translate it 

	// void means [ No Type ]









}

