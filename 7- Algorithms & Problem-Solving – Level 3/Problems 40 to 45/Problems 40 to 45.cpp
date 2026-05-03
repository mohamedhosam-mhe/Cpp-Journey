// Problems 40 to 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;





// Problem 41 [ Pogram to read string and reverse its words ] 





//vector <string> SplitStringWords(string MyString, char Delim) {
//
//	vector <string> StringWords;
//
//	string TempWord="";
//
//	for (int i = 0; i < MyString.length(); i++) {
//
//		if (MyString[i] != Delim) {
//
//			TempWord = TempWord + MyString[i];
//		}
//		else {
//
//			if (TempWord.length() > 1) {
//
//				StringWords.push_back(TempWord);
//				TempWord = "";
//			}
//		}
//	}
//
//	return StringWords;
//
//}

vector <string> SplitStringWords(string MyString, string Delim) {

	int pos = 0;
	string sWord = "";
	vector <string> OriginalWords;
	while ((pos = MyString.find(Delim)) != std::string::npos) {

		sWord = MyString.substr(0, pos);

		if (sWord != "") {

			OriginalWords.push_back(sWord);
		}

		MyString.erase(0, pos + Delim.length());
	} 

	if (MyString != "") {

		OriginalWords.push_back(MyString);
	}

	return OriginalWords;

}


vector <string> ReversVectorWords(vector <string>Words) {

	vector <string> ReverseWords;
	short size = Words.size();
	for (int i = 0; i < size; i++) {

		ReverseWords.push_back(Words.back());

		Words.pop_back();
	}

	return ReverseWords;
	
}




//Another Solution 
string ReversVectorWordsAnotherSol(string MyString, string Delim) {

	vector <string> vString;
	string S2 = "";

	vString = SplitStringWords(MyString, Delim); // To strore string in vector as words to reverse them 
	

	// to get the vector item reversed

	vector <string> ::iterator iter = vString.end();

	while (iter != vString.begin()) {

		--iter;
		S2 += *iter + " ";
	}

	S2 = S2.substr(0, S2.length() - 1); // Remove last space;

	return S2;

}




// Problem 42 [ Replace Word in string ]





string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string ReplaceTo) {

	short pos = S1.find(StringToReplace);// This will point to the first letter position of the word

	while (pos != std::string::npos) {

		S1 = S1.replace(pos, StringToReplace.length(), ReplaceTo); // This will replace specifc index value with another
					// (WordfirstIndex,How many letters after Index, String to replace )
					// (From Index , To Index, replace with this string )
		
		pos = S1.find(StringToReplace);
		

	}

	return S1;
	
}




// Problem 43 [ Make replace words manually ]

string LowerAllString(string Anything) {

	for (int i = 0; i < Anything.length(); i++) {

		Anything[i] = tolower(Anything[i]);
	}

	return Anything;
}

string JoinString(vector <string> vString, string Delim) {

	string MyString = "";

	for (string& i : vString) {

		MyString = MyString + i + Delim;
	}

	return MyString;
}

string ReplaceStringWord(string MyString, string WordYouWantToReplace, string ReplaceTo, bool MatchCase = true) {


	vector <string> StringWords;

	StringWords = SplitStringWords(MyString, " ");
	


	for (string& i : StringWords) {
		
		if (MatchCase ) {
			if (i == WordYouWantToReplace) {

				i = ReplaceTo;

			}
		}
		else {

			if (LowerAllString(i) == LowerAllString(WordYouWantToReplace)) {

				i = ReplaceTo;
			}
		}
	}

	return JoinString(StringWords," ");
}





// Problem 44 [ Remove all punctuations from string ] 


string RemovePunctiuationFromString(string MyString) {

	string NewString = "";
	for (int i = 0; i < MyString.length(); i++) {

		if (!ispunct(MyString[i])) { // ispunct() is a built in function compares char to check is it a puncituation or not 

			NewString += MyString[i];

		}
	}

	return NewString;
}




// Problem 45 [ Convert record to line ]



struct stClient {

	string AccNumber;
	string Pin;
	string Name;
	string phone;
	double Balance;

};


stClient FillClientInformation(stClient& Client) {

	cout << "Please Enter Client Data : \n\n";


	cout << "Enter Account Number?  ";
	cin >> Client.AccNumber;
	cout << "\nEnter PinCode?  ";
	cin >> Client.Pin;
	// Clear leftover newline before getline
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "\nEnter Name?  ";
	getline(cin, Client.Name);
	cout << "\nEnter Phone?  ";
	cin >> Client.phone;
	cout << "\nEnter Account Balance?  ";
	cin >> Client.Balance;

	return Client;
}


string ConvertRecordToLine(stClient Client, string Delim) {

	string stClientRecord = "";
	stClientRecord += Client.AccNumber + Delim;
	stClientRecord += Client.Pin + Delim;
	stClientRecord += Client.Name + Delim;
	stClientRecord += Client.phone + Delim;
	stClientRecord += to_string(Client.Balance);
	

	return stClientRecord;

}










int main()
{



	// Problem 41 

	string Mystring = " I\'m Mohamed Hosam Eldin Mohamed Mohamed Graduated from MUST University ";
	cout << Mystring << endl;


	vector <string> SplittedWords = SplitStringWords(Mystring," ");

	cout << "\nVector Normally : \n";
	for (string& i : SplittedWords) {

		cout << i << " ";
	}



	vector <string> ReversedWords = ReversVectorWords(SplittedWords);

	cout << "\nVector after reversing : \n";
	for (string& i : ReversedWords) {


		cout << i << " ";
	}

	cout << "\n\n*****************************************************************************\n\n\n";

	// Another Solution 

	 cout << ReversVectorWordsAnotherSol(Mystring, " ")<< endl;



	 cout << "\n\n*****************************************************************************\n\n\n";
	  


	// Problem 42 





	 cout << ReplaceWordInStringUsingBuiltInFunction(Mystring, "Mohamed", "Yousef");

	 cout << "\n\n*****************************************************************************\n\n\n";

	 
	 
	 // Problem 43


	 cout << "Replace with match case : \n\n";

	 cout << ReplaceStringWord(Mystring, "Mohamed", "Ahmed")<< endl;
	 cout << "\n\n*****************************************************************************\n\n\n";

	 cout << "Replace without  match case : \n\n";
	 cout << ReplaceStringWord(Mystring, "mohamed", "Yousef",false)<< endl; // we put false to disable match case



	 cout << "\n\n*****************************************************************************\n\n\n";



	 // Problem 44 

	 string NewString = "My Name,: is\" Mohamed* Hosam&";
	 cout << "Original String :\n" << NewString << endl;
	 cout <<"Pancituations Removed :\n" <<  RemovePunctiuationFromString(NewString) << endl;



	 cout << "\n\n*****************************************************************************\n\n\n";
	 cout << "\n\n*****************************************************************************\n\n\n";


	 // Problem 45

	 
	 stClient Client1;



	 Client1 = FillClientInformation(Client1);


	 cout << "\n\n\n\nClient Record for saving is : \n";
	 cout << ConvertRecordToLine(Client1, "#//#") << endl;




}

