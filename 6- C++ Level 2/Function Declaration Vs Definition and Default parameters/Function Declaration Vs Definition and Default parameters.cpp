// Function Declaration Vs Definition and Default parameters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void Add(int, int);  // This make a declaration to the fuction and the IDE will look for it in the whole code 


//***************************************************************************888
//***************************************************************************888


// Defualt parameterws [ When we make a function sometimes we need to add default pararmeter if the input fail to give all parameters 


int MySum(int a, int b, int c = 0, int d = 0) {  // a and b is normal parameters ,but c and d are default parameters 

	// if the user failed to enter c or d it will not give an error it simply will add there default values 

	return (a + b + c + d);
}




int main()
{
	// The problem that faces us when we make a function definition as we do as usual and sometimes 

	// There were an ERORR because of the function called time like if we define a function below 

	// main function and we tried to call it it will give an ERORR because in C++ the output is shown with line order


	// so we must make a function declration in the beginning of our code to give IDE that we have theis function somewhere in our code



	// EXAMPLE : 

	// If we tried to use Add function that below the main function it Will give an ERORR


	Add(8, 10);  // We must make declaration in the beginning of our code to let IDE Recognize that we have this function and look for it 



	//***************************************************************************888
	//***************************************************************************888
	//***************************************************************************888



	cout << "******************************************************\n\n\n";

	cout << MySum(10, 20) << endl;
	cout << MySum(10,20, 30) << endl;
	cout << MySum(10,20, 30, 40) << endl;







}




void Add(int A, int B) {


	cout << A + B;
}

