// Problems 31 to 35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;


string ReadString() {

	string YourString;
	getline(cin,YourString);

	return YourString;
}

char ReadChar() {

	char Letter;

	cin >> Letter;

	return Letter; 
}


// Problem 31 [ print a string and read specific letter and match case or not if m count m and after this count m and M ]

// I did this exact thing in my previous problem 30, i'm counting all cases,so we will add another condition to count when m or M (what the user inputs ]






// Problem 32 [ Check vowel or not (U,A,E,I,O)]


void CheckVowel(char Letter) {

	Letter = tolower(Letter);

	switch (Letter) {

	case 'u' :
		cout << "Yes Letter \'" << Letter << "\' is vowel ";
		break;

	case 'a' : 
		cout << "Yes Letter \'" << Letter << "\' is vowel ";
		break;

	case 'e': 
		cout << "Yes Letter \'" << Letter << "\' is vowel ";
		break;

	case 'i' : 
		cout << "Yes Letter \'" << Letter << "\' is vowel ";
		break;

	case 'o': 
		cout << "Yes Letter \'" << Letter << "\' is vowel ";
		break;

	default:
		cout << "No Letter \'" << Letter << "\' is  NOT vowel ";
		break;

	}

}

// we can also make boolean function without switch case using OR logic to return true or false 

bool CheckVowelwithoutswitch(char Letter) {

	Letter = tolower(Letter);

	return (Letter == 'u') || (Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o');

}




// Problem 33 [ Count all vowels in a string ]


short CountVowelsInString(string YourString) {

	short VowelCounter = 0;

	for (int i = 0; i < YourString.length(); i++) {

		YourString[i] = tolower(YourString[i]);
		if (CheckVowelwithoutswitch(YourString[i])) {

			VowelCounter++;
		}
	}

	return VowelCounter;
}




// Problem 34 [ Print all vowels in string ]

bool CheckVowelwithoutswitchCapitalAndSmall(char Letter) {

	Letter = tolower(Letter);

	return (Letter == 'u') || (Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') ||
		(Letter == 'U') || (Letter == 'A') || (Letter == 'E') || (Letter == 'I') || (Letter == 'O');

}

void PrintAllVowelsInString(string YourString) {

	cout << "Vowels in string are :  ";

	for (int i = 0; i < YourString.length(); i++) {


		if (CheckVowelwithoutswitchCapitalAndSmall(YourString[i])) {

			cout << YourString[i] << "\t";
			
		}
	}
	 
	cout << endl;

}


// Problem 35 [ write a program that can read a string and print every word of that string ] 


void PrintEveryWordInString(string YourString) {

	string TempWord = "";
	for (int i = 0; i < YourString.length(); i++) {

		if (YourString[i] == ' ') {

			cout << TempWord << endl;
			TempWord = "";
		}
		else {

			TempWord = TempWord + YourString[i];
		}

		
	}
}


// Another solution : 



void ReadEachWordInString(string S1) {

	string delim = " "; 

	cout << "Your String words are : \n\n";
	short pos = 0;
	string sWord; 

	while ((pos = S1.find(delim)) != std::string::npos) {

		sWord = S1.substr(0, pos);

		if (sWord != "") {

			cout << sWord << endl;
		}

		S1.erase(0, pos + delim.length());

	}

	if (S1 != "") {

		cout << S1 << endl;
	}

}




// Problem 36 [ Count each word in string ] 

int CountEveryWordInString(string S1) {

	string delim = " ";

	short pos = 0;
	string sWord = "";
	short CountWords = 0;

	while (S1.find(delim) != std::string::npos) {

		pos = S1.find(delim);
		sWord = S1.substr(0, pos);

		if (sWord != "") {

			CountWords++;
		}

		S1.erase(0, pos + delim.length());
		
	}

	if (S1 != "") {

		CountWords++;
	}

	return CountWords;

 }






// Problem 37 [ Split string ] 
void PrintStringVectorContent(vector <string> Content) {

	for (string& i : Content) {

		cout << i << endl;
	}
}

vector <string> SplitFunctionWithDelimeter(string YourString, string Delim = " ") {

	vector <string> Words;
	
	string sWord;
	short pos = 0;
	short Tokens = 0;


	while (YourString.find(Delim) != std::string::npos) {

		pos = YourString.find(Delim);
		sWord = YourString.substr(0, pos);
		if (sWord != "") {

			Words.push_back(sWord);
			Tokens++;
		}

		YourString.erase(0, pos + Delim.length());
	}

	if (YourString != "") {

		Words.push_back(YourString);
		Tokens++;
	}

	return Words;
}



// Problem 38 [ Trim function  left and right and trim all --> remove spaces from write and left the string ] 





string TrimLeft(string MyString) {

	short pos = 0;

	while (pos < MyString.size() && MyString[pos] == ' ') {

		pos++;
	}

	MyString.erase(0, pos);

	return MyString;
}



string TrimRight(string MyString) {

	short pos = MyString.size()-1;

	while (pos >= 0 && MyString[pos] == ' ') {

		pos--;
	}

	MyString.erase(pos+1);// This will erase from this position to end 


	return MyString;
}


string Trim(string MyString) {

	return TrimRight(TrimLeft(MyString));
}

// we can also make it using for since we have the length of the string and we will use if to check if the space is ' ' or not and subtract all string left, left we will start normal, right we will start revers 










// Problem 39 [ Join String ] 

string JoinString(vector <string> Names,string Delim) {

	string S1 = " ";

	for (string& i : Names) {


		S1 = S1 + i + Delim;
		
	}

	return S1.substr(0, S1.length() - Delim.length());
}





// Problem 40 [ Join String (overloading) ] --> we will make  the same function name as the previous but with array and length 
// One Name for alot of functions called {Overloading}


string JoinString(string Names[], short ArrLength, string Delim) {

	string S1 = "";

	for (int i = 0; i < ArrLength; i++) {

		S1 = S1 + Names[i] + Delim;
	}

	return S1.substr(0, S1.length() - Delim.length());
}












int main()
{

	// Problem 31 [ Done in Problem 30 ]




	// Problem 32 

	
	cout << "Please Enter a character ? \n";
	char Letter = ReadChar();
	CheckVowel(Letter);

	// Another solution 

	if (CheckVowelwithoutswitch(Letter)) {

		cout << "\nYes Letter \'" << Letter << "\' is vowel\n";
	}
	else {
		cout << "\nNO Letter \'" << Letter << "\' is NOT vowel\n";

	}


	// Problem 33 

	cout << "Please Enter Your string to check how many vowels ? \n";

	string YourString;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');// important to let getlin functional and not enterupted by other cin

	YourString = ReadString();

	cout << "Number of Vowels is : " << CountVowelsInString(YourString) << endl;


	cout << "\n*****************************************************************\n\n\n";
	// Problem 34 

	PrintAllVowelsInString(YourString);


	cout << "\n*****************************************************************\n\n\n";

	// Problem 35 


	PrintEveryWordInString(YourString);

	cout << "\n*****************************************************************\n\n\n";


	// another solution : 

	ReadEachWordInString(YourString);


	cout << "\n*****************************************************************\n\n\n";


	// Problem 36 



	cout << "The number of words in your string is : " << CountEveryWordInString(YourString) << endl;


	cout << "\n*****************************************************************\n\n\n";



	// Problem 37 


	vector <string> Words = SplitFunctionWithDelimeter(YourString, ",");

	cout << "\nTokens = " << Words.size() << endl;

	PrintStringVectorContent(Words);

	cout << "\n*****************************************************************\n\n\n";


	// Problem 38

	cout << "Please Enter a String to Trim it : \n";
	string MyString = "        Mohamed Hosam Eldin           ";
	cout << "My String = " << MyString << endl;
	cout << "Trim Left\t=" << TrimLeft(MyString) << endl;
	cout << "Trim Right\t=" << TrimRight(MyString) << endl;
	cout << "Trim\t=" << Trim(MyString) << endl;


	cout << "\n*****************************************************************\n\n\n";


	// Problem 39 
	cout << "This is string joining using vector : \n";

	vector <string> Names = { "Mohamed", "Hosam", "Yousef", "Hosam", "Ibrahim" };

	cout << JoinString(Names, ",") << endl;


	cout << "\n*****************************************************************\n\n\n";


	// Problem 40 

	cout << "This is string joining using arrays : \n";
	string ArrNames[] = { "Mohamed", "Hosam", "Yousef", "Hosam", "Ibrahim" };


	cout << JoinString(ArrNames, 5, "-") << endl;











}

