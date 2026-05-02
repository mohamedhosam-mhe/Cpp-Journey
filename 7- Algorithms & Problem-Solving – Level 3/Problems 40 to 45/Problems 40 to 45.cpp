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

	short pos = 0;
	string sWord = "";
	vector <string> OriginalWords;
	while (pos = MyString.find(Delim) != std::string::npos) {

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


vector <string> SplitStringWords(string MyString, string Delim) {

	short pos = 0;
	string sWord = "";
	vector <string> OriginalWords;
	while (pos = MyString.find(Delim) != std::string::npos) {

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

//Another Solution 
string ReversVectorWordsAnotherSol(string MyString, string Delim) {

	vector <string> vString;
	string S2 = "";

	vString = SplitStringWords(MyString, Delim);
	

	// to get the vector item reversed

	vector <string> ::iterator iter = vString.end();

	while (iter != vString.begin()) {

		--iter;
		S2 += *iter + " ";
	}

	S2 = S2.substr(0, S2.length() - 1); // Remove last space;

	return S2;

}





int main()
{



	

	string Mystring = " I\'m Mohamed Hosam Graduated from MUST University ";

	vector <string> SplittedWords = SplitStringWords(Mystring," ");

	cout << "\nVector Normally : \n";
	for (string& i : SplittedWords) {


		cout << i << "    ";
	}



	vector <string> ReversedWords = ReversVectorWords(SplittedWords);

	cout << "\nVector after reversing : \n";
	for (string& i : ReversedWords) {


		cout << i << " ";
	}

	









}

