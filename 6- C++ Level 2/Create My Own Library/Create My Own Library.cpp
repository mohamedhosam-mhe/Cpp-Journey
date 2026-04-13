// Create My Own Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "MyLib.h"

using namespace std;

using namespace MyLib;  // Not Recommended because it may make a problems if there is any conflicts in names ,so better without it just type LibName::FuncName;





int main()
{

	// To make new library [ view in the header ] , then  {Solution explorer}  this will open our project file left or right hand side 

	// we will right click on " Header Files " , then Add , Then Add new item 

	// After This show all templates [ if the templates dosen't show directly ] and choose headerfile .h

	// Right the name of your library and add


	// in the new library we make 
	// 
	/*[namespace " Library Name "
	{

		// Start type my functions and close 

	}*/



	// Now we are succesully made local library and we can access it by including it in the project file by using 


	// include " Library Name " -----> We use "" insted of <> in include because its locally created 


	// after including it we can use our functions in all of our program without typing it again 

	// just type -------> Library Name::FunctionName()

	// and if we have multible libraries you can access it in any library 


	// like in our library we used <iostream>   -----> So its very flexable .



	// and like std library 


	// we can use using namespace " Library Name " 


	// We will be able to execute them without :: 





	int Arr[100] = { 1, 2, 3, 4, 5 };
	int ArrLen = 5;

	MyLib::PrintArrayElemnents(Arr, ArrLen);


	cout << MyLib::Sum2Numbers(10, 12) << endl;


	cout << Sum2Numbers(10, 13);

}
