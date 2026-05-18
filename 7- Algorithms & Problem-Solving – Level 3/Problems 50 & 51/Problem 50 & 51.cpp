// Problem 50 & 51.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


const string FileName = "ClientsData.txt";


string ReadClientAccountNumber() {

	string AccountNumber;
	cout << "Please Enter AccountNumber?  ";
	cin >> AccountNumber;

	return AccountNumber;
}



// Problem 50 [ Deleting Account by account number ]

struct stNewClients {

	string AccNumber;
	string Pin;
	string Name;
	string phone;
	double Balance;
	bool MarkForDelete = false;
};


string ConvertRecordToLine(stNewClients Client, string Delim = "#//#") {

	string stClientRecord = "";
	stClientRecord += Client.AccNumber + Delim;
	stClientRecord += Client.Pin + Delim;
	stClientRecord += Client.Name + Delim;
	stClientRecord += Client.phone + Delim;
	stClientRecord += to_string(Client.Balance);


	return stClientRecord;
}


stNewClients ConvertLineToRecord(string LineData, string Delim = "#//#") {

	stNewClients ClientData;


	ClientData.AccNumber = LineData.substr(0, LineData.find(Delim));
	LineData.erase(0, LineData.find(Delim) + Delim.length());
	ClientData.Pin = LineData.substr(0, LineData.find(Delim));
	LineData.erase(0, LineData.find(Delim) + Delim.length());
	ClientData.Name = LineData.substr(0, LineData.find(Delim));
	LineData.erase(0, LineData.find(Delim) + Delim.length());
	ClientData.phone = LineData.substr(0, LineData.find(Delim));
	LineData.erase(0, LineData.find(Delim) + Delim.length());
	ClientData.Balance = stod(LineData.substr(0, LineData.find(Delim)));

	return ClientData;

}

vector <stNewClients> SaveClientsToVector(string FileName) {

	vector <stNewClients> Data;
	stNewClients Client;


	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {

		string Line;
		while (getline(MyFile, Line)) {
			Client = ConvertLineToRecord(Line);
			Data.push_back(Client);
		}

		MyFile.close();

	}

	return Data;

}

vector <stNewClients> SaveClientsToFileAfterDeleting(string FileName, vector <stNewClients> vClients) {

	fstream MyFile;
	string DataLine;

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open()) {

		for (stNewClients& C : vClients) {
			if (C.MarkForDelete == false) {

				DataLine = ConvertRecordToLine(C);

				MyFile << DataLine << endl;

			}
			
		}

		MyFile.close();
	}

	return vClients;
}

//We will make a structrure same as old one but we will add mark for delete flag to detect which account to delete
void PrintClientData(stNewClients ClientData) {


	cout << "Account Number :" << ClientData.AccNumber << endl;
	cout << "Pin Code       :" << ClientData.Pin << endl;
	cout << "Name           :" << ClientData.Name << endl;
	cout << "Phone          :" << ClientData.phone << endl;
	cout << "Account Balance:" << ClientData.Balance << endl;

}


bool FindClientByAccountNumber(string AccountNumber, vector <stNewClients> vClients, stNewClients& Client) {


	for (stNewClients& C : vClients) {

		if (C.AccNumber == AccountNumber) {

			Client = C;
			return true;
		}
	}

	return false;

}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector <stNewClients> &vClients) {


	for (stNewClients &C : vClients) {

		if (C.AccNumber == AccountNumber) {

			C.MarkForDelete = true;
			return true;
		}
	}

	return false;
}

bool DeleteClientByAccountNumber(string AccountNumber, vector <stNewClients>& vClients) {

	stNewClients Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber, vClients, Client)) {

		PrintClientData(Client);

		cout << "\n\n Are you sure you want to delete this client? y/n ?   ";
		cin >> Answer;

		if (toupper(Answer) == 'Y') {

			MarkClientForDeleteByAccountNumber(AccountNumber, vClients);
			SaveClientsToFileAfterDeleting(FileName, vClients);


			// Now we will Refresh the vector with the new list [ without deleted accounts ]

			vClients = SaveClientsToVector(FileName);


			cout << "\n\n Client Deleted Successfully. ";

			return true;

		}


	}
	else {

		cout << "\n\n Client with Account Number (" << AccountNumber << ") is NOT found! \n";
		return false;
	}
}








// Problem 51 [ Update Client by account Number ] 

string ReadString(string Message) {

	string Anything;

	cout << Message;
	getline(cin, Anything);

	return Anything;
}

stNewClients ChangeClientData( stNewClients &Client) {

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	Client.Pin = ReadString("\nEnter PinCode?     ");
	Client.Name = ReadString("\nEnter Name?     ");
	Client.phone = ReadString("\nEnter Phone?     ");
	Client.Balance = stod(ReadString("\nEnter Balance?     "));

	return Client;

}


bool UpdateVectorWithNewClientInformation(string AccountNumber, vector <stNewClients>& vClients, stNewClients Client) {


	for (stNewClients& C : vClients) {

		if (C.AccNumber == AccountNumber) {

			C = Client;
			return true;
		}
	}

	return false;
}

vector <stNewClients> SaveClientsToFile(string FileName, vector <stNewClients> vClients) {

	fstream MyFile;
	string DataLine;

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open()) {

		for (stNewClients& C : vClients) {
			
			DataLine = ConvertRecordToLine(C);

			MyFile << DataLine << endl;

		}

		MyFile.close();
	}

	return vClients;
}


bool UpdateClientDataByAccountNumber(string AccountNumber, vector <stNewClients> &vClients) {

	stNewClients Client;
	char Answer = 'n';

	if (FindClientByAccountNumber(AccountNumber,vClients,Client)) {

		
		cout << "The following are the client details : \n\n";

		PrintClientData(Client);

		cout << "\n\nAre you sure you want to update this client? y/n?   ";
		cin >> Answer;

		if (toupper(Answer) == 'Y') {

			ChangeClientData(Client);
			
			UpdateVectorWithNewClientInformation(AccountNumber, vClients, Client);

			SaveClientsToFile(FileName, vClients);

			// Update vector with new Updates 

			vClients = SaveClientsToVector(FileName);

		}

		cout << "\n\n Client Updated Successfully. \n";
		return true;



	}
	else {

		cout << "\n\n Client with Account Number (" << AccountNumber << ") NOT found! \n";
		return false;
	}

}
























int main()
{


	//Problem 50 



	vector <stNewClients> vClients = SaveClientsToVector(FileName);

	string AccountNumber = ReadClientAccountNumber();


	//DeleteClientByAccountNumber(AccountNumber, vClients);




	cout << "\n\n\n************************************************************************\n\n\n";


	// Problem 51


	UpdateClientDataByAccountNumber(AccountNumber, vClients);









}

