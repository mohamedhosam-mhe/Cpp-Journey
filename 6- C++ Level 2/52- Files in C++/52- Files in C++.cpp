
// 52- Files in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> //  We must inclde this library to access files 
#include <string>
#include <vector> // to store the data in vectors and modify it 
using namespace std;




void PrintFileContent(string FileName) {


	fstream MyFile;

	MyFile.open(FileName, ios::in); // ios::in --> Read mood

	if (MyFile.is_open()) {

		string line; // This string will store every line of the file and we will print it using a loop

		while (getline(MyFile, line)) { // getline will read all line until reaches a new line "\n" and store it in line variable 
										// and getline it self returns true if there is a line and false if the lines finishs

			cout << line << endl;
		}

		MyFile.close();

	}
}




void LoadDataFromFileToVector(string FileName , vector <string>& vFileContent) { // we must make the vector by ref & to store the data in its location 


	fstream MyFile;

	MyFile.open(FileName, ios::in); // ios::in --> Read mood

	if (MyFile.is_open()) {

		string line; // This string will store every line of the file and we will print it using a loop

		while (getline(MyFile, line)) { // getline will read all line until reaches a new line "\n" and store it in line variable 
			// and getline it self returns true if there is a line and false if the lines finishs

			vFileContent.push_back(line);
		}

		MyFile.close();

	}
}




// Save vector to string 



void SaveVectorToFile(string FileName, vector <string> vContent) {

	fstream MyFile2;

	MyFile2.open(FileName, ios::out);  // we must use write to create the file if not exsists

	if (MyFile2.is_open()) {

		for (string& line : vContent) {

			if (line != "") {

				MyFile2 << line << endl;

			}

		}

		MyFile2.close();
	}

}





// Deleting Record from file using vectors 



void DeleteRecordFromFile(string FileName, string Record) {

	vector <string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);


	for (string& Line : vFileContent) {

		if (Line == Record){

			Line = "";

		}
	}

	SaveVectorToFile(FileName, vFileContent);



}


// Updating record in file using vectors 


void UpdateRecordInFile(string FileName, string Record, string Update) {


	vector <string> vContent;

	LoadDataFromFileToVector(FileName, vContent);

	for (string& Line : vContent) {

		if (Line == Record) {

			Line = Update;
		}
	}

	SaveVectorToFile(FileName, vContent);
}





int main()
{
	// Files in C++ 

	//  There is alot of operation can done with files now we will know the basics

	//********************************************


	// Write mood : this allow us to make changes to our file, but it removes all the data in the file and starts from the beggining

	// When we open a file we type its name if its exists it will be opeend if not a file will created in the project directory 
	// with the same name, or we can put manually where we want to save the file 


	fstream MyFile; // makeing object called my file to manipulate files 


	MyFile.open("MyFile.txt", ios::out);  // this will open MyFile.txt if exists if not its will be created ( ios::out ---> write mood )

	if (MyFile.is_open()) {


		MyFile << "My Name is Mohamed Hosam .\n";
		MyFile << "Im a Software Engineer ." << endl;
		MyFile << "I'm trying my best, and trust Allah . \n";


		// After finishing writing in file we MUST close the file 

		MyFile.close();


		// Ofcourse we will not get any values in terminal because the changes happend in the file 

	}

	// if we tried to change the previous values it will wipe all the data and put the new one because we are in [ write mode ]





	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************


	// Append Mode 
	// in this mode we are adding data to the excisting data in the file without removing it 


	MyFile.open("MyFile.txt", ios::out | ios::app);  // we just can type ios::app ,but if the file was not exsists it will give an error ,so
										  // we can but (ios::out | ios::app), this will ensure that if the file is not exsists this write mode will create it 
										  // ofcourse after this append mode will take the advantage of the execution and add data without removing it

	if (MyFile.is_open()) {


		MyFile << "I love my job\n";
		MyFile << "I hope i can find a good job ." << endl;
		MyFile << "inshallah . \n";


		// After finishing  manipulating the file we MUST close the file 

		MyFile.close();


		// Ofcourse we will not get any values in terminal because the changes happend in the file 

	}

	

	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************



	// Read Mood 

	// Explore file data on terminal and read it 


	// we can do this in main function, but it will be more clear to make a function that takes file name and read its data directrly 



	PrintFileContent("MyFile.txt");




	cout << "*******************************************************\n\n\n";



	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************



	// Load data from file to vector 

	// If we wants to take a copy from file data to a vector we can use the same read function and just push back line data into vector of strings 

	// After this we can easily print its values with ranged loop 


	vector <string> vFileContent;

	LoadDataFromFileToVector("MyFile.txt", vFileContent);


	for (string& content : vFileContent) {

		cout << content << endl;
	}






	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************




	// Save vector to file 

	// Now we will save vector to file [ we will create new file ] 


	vector <string> vNames{ "Mohamed", "Ahmed", "Yousef", "Manar", "Hosam", "Ali" };


	SaveVectorToFile("MyFile2.txt", vNames);



	cout << "*****************************************************\n\n\n\n";


	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************

	// Delete record from file using vectors 


	// its a bit tricky but it does the work 

	// firstly we will read and save file data to vector 

	// Secondly we will search for any record we want and just replacee "" empty stirng inside it 

	// if we remember when adding data from vector to file we put a condition if line != "" --> type it in file and if not just skip it 

	// so basically we will take a copy of the data into a vector after this we will remove all previous data and upload new data with record deleted 


	cout << "File content before Deleting record : " << endl;

	PrintFileContent("MyFile3.txt");


	DeleteRecordFromFile("MyFile3.txt", "Mohamed");

	cout << "File content after Deleting record : " << endl;

	PrintFileContent("MyFile3.txt");



	cout << "*****************************************************\n\n\n\n";

	//********************************************************************
	//********************************************************************
	//********************************************************************
	//********************************************************************
	

	// Update record to file from vector 

	// just like deleting but instead of replacing "" in record place we will put our update ;


	cout << "File Content before updating : " << endl;
	PrintFileContent("MyFile4.txt");


	UpdateRecordInFile("MyFile4.txt", "Mohamed", "King");

	cout << "\n\n File Content after update : " << endl;

	PrintFileContent("MyFile4.txt");





}

