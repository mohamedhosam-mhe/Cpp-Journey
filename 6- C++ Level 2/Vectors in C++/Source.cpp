#include <iostream>
#include <cstdlib>
#include <vector> // We must include vector lib
using namespace std;



//We will make vector of structures

struct stEmployees {

	string FirstName;
	string SecondName;
	float Salary;
};



// Homework [29] --> make 2 functions one to ask user to add numbers and add it to vector , second function to print it

void AddNumberToVector(vector <int> &vAddNumbers) { // We must add vectors to functions by reference or it will not update the main vector 

	char ContinueAdding = 'y';
	
	int NewNumber;




	do {


		cout << "Please enter a number to add it to vector : ";
		cin >> NewNumber;
		
		vAddNumbers.push_back(NewNumber);

		cout << "\nDo you want to Add more numbers ? Y/N?    ";
		cin >> ContinueAdding;
	} while (ContinueAdding == 'y' || ContinueAdding == 'Y');

	cout << endl;

}


void PrintVectorItems(vector <int> & vAddNumbers) {  // Here we can add also by ref to make the program faster than make a copy of it 

	cout << "Vector Numbers : \n";

	for (int& i : vAddNumbers) {

		cout << i << endl;
	}
}


//Homework --> Add functions to make employees and push them to vector and ask user if he wants to add more


void AddEmployeesToVector(vector <stEmployees> & vMyEmployees) {

	stEmployees tempEmployee;
	char ContinueAdding = 'y';

	do {

		cout << "Enter Employee \'First Name\' :      ";
		cin >> tempEmployee.FirstName;
		cout << "\n\nEnter Employee \' Second Name\' :      ";
		cin >> tempEmployee.SecondName;
		cout << "\n\nPlease enter Employee \'Salary\' :      ";
		cin >> tempEmployee.Salary;
		vMyEmployees.push_back(tempEmployee);

		cout << "\n\n\nDo you want to add mor Employees ?  Y/N ?    ";
		cin >> ContinueAdding;
	} while (ContinueAdding == 'y' || ContinueAdding == 'Y');

	cout << "\n\n";
}


void PrintEmployeesFromVector(vector <stEmployees> & vMyEmployees) {


	for (stEmployees Employee : vMyEmployees) {


		cout << "First Name : " << Employee.FirstName << endl;

		cout << "Second Name : " << Employee.SecondName << endl;

		cout << "Salary : " << Employee.Salary << endl;

		cout << "\n\n\n";

	}


	cout << "\n\n\n";

}





int main() {


	// vectors in c++


	// How we can Initialize a vector and print it 




	// std::vector <type> vector_name;


	vector <int> vNumbers = { 1,2,3,4,5 };  // we use v before vector name to notice its a vector when revising the code


	cout << "Vector Numbers : ";

	// if we want to print vectors we use ranged for to do this 
	// the i will take a copy of every vector value and store it to print 
	// The problem of this method that it will slowin down the app, because every time copy and paste will take time 
	// and if the vector type is structure or alot of enteries we need more prober way 


	// we will just take the i by ref to just access the reference of the vector value and type it directly without copying 

	// just go to vector ref and print whats their 

	for (int &i : vNumbers) {

		cout << i << " ";

	}

	cout << endl;




	// How to add elements to vectors


	vector <int> vMyVector;


	vMyVector.push_back(10);
	vMyVector.push_back(20);
	vMyVector.push_back(30);
	vMyVector.push_back(40);
	vMyVector.push_back(50);
	vMyVector.push_back(60);



	for (int& i : vMyVector) {


		cout << i << endl;
	}

	cout << "*******************************************************************\n\n\n\n";


	// Homework ----> make 2 functions one to ask user to add numbers and add it to vector , second function to print it 

	
	vector <int> AddNumbers;

	AddNumberToVector(AddNumbers);

	PrintVectorItems(AddNumbers);

	cout << "*******************************************************************\n\n\n\n";



	// Vector of structure 

	vector <stEmployees> vEmployees;

	stEmployees tempEmployees;

	tempEmployees.FirstName = "Mohamed";
	tempEmployees.SecondName = "HosamEldin";
	tempEmployees.Salary = 7500;
	// we now filled tempEmployees with data, we will push it to the vector 

	vEmployees.push_back(tempEmployees);


	// we will make another record, and send it to the vector again

	tempEmployees.FirstName = "Ibrahim";
	tempEmployees.SecondName = "Ashraf";
	tempEmployees.Salary = 10000;
	vEmployees.push_back(tempEmployees);

	//another record 

	tempEmployees.FirstName = "Yousef";
	tempEmployees.SecondName = "HosamEldin";
	tempEmployees.Salary = 10000;
	vEmployees.push_back(tempEmployees);


	for (stEmployees & i : vEmployees) {


		cout <<"First Name : " <<  i.FirstName << endl;
		cout << "Second Name : " << i.SecondName << endl;
		cout << "Salary : " << i.Salary << endl;

		cout << "\n\n";

	}




	// Homework ---> Add functions to make employees and push them to vector and ask user if he wants to add more 


	vector <stEmployees> vMyEmployees;

	AddEmployeesToVector(vMyEmployees);

	PrintEmployeesFromVector(vMyEmployees);






	// Remove vector object ;


	vector <int> MyOnlyVector;

	MyOnlyVector = { 1,2,3,4 };

	// To remove items from vector we use pop_back() function and it will remove the last object entered and so on
	MyOnlyVector.pop_back();
	MyOnlyVector.pop_back();
	MyOnlyVector.pop_back();
	MyOnlyVector.pop_back();

	// Now the vector is empty ,so if i removed any item again it will broke my program ,so we can check using if
	
	if (!MyOnlyVector.empty()) {  // Here empty() function gives true or false so i check if its not empty pop the item 

		MyOnlyVector.pop_back();
	}



	// we can also use size function to debug

	if (MyOnlyVector.size() > 0) {

		MyOnlyVector.pop_back();
	}


	cout << "Vector Numbwes : " << endl;

	for (int & i : MyOnlyVector) {

		cout << i << endl;
	}



	MyOnlyVector.push_back(10);
	MyOnlyVector.push_back(9);

	cout << "Stack size : " << MyOnlyVector.size() << endl;
	// if we want to remove all vector items we use clear() function 

	MyOnlyVector.clear();

	cout << "Stack size : " << MyOnlyVector.size() << endl;



	// There is some useful vector functions 


	vector <int> vVectorFunctions;


	vVectorFunctions.push_back(10);
	vVectorFunctions.push_back(20);
	vVectorFunctions.push_back(30);
	vVectorFunctions.push_back(40);
	vVectorFunctions.push_back(50);



	cout <<"First Number in vectror : " <<  vVectorFunctions.front() << endl;
	cout << "Last Number in vectror : " << vVectorFunctions.back() << endl;// if we are dealing with real program we must check if vector is empty or not first 


	cout << "Vector size : " << vVectorFunctions.size() << endl;

	vVectorFunctions.pop_back();
	vVectorFunctions.pop_back();


	cout << "Vector Capacity : " << vVectorFunctions.capacity() <<"      Vector capacity still 6 after removing 2 elements of vector ." << endl; // what is the vector can store before allocate usually capcity >= size 

	cout << "Vector Size : " << vVectorFunctions.size() << endl; // size changes upon vector items,so it tells whats vector current items


	cout << "vector empty : " << vVectorFunctions.empty() << endl; // gives 0 if vector have items and 1 if vector don't






	return 0;
}