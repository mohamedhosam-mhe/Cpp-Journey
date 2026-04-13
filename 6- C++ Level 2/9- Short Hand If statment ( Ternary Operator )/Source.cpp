#include <iostream>
#include <string>

using namespace std;








int main(){


	// we will know about 

	// Short hand If

	// It calls also [ Ternary Operator ]


	int Mark = 90;

	string result;

	// if we want to know if pass or fail we will do normal if statment 


	if (Mark >= 50) {

		result = "Pass\n\n";
	}
	else {

		result = "Fail\n\n";
	}

	cout << result << endl;

	// but we can use shor hand if insted 

	// condition ? "True " : " False "


	string ShortHandIfResult = (Mark >= 50) ? "Pass" : "Fail";

	cout <<  ShortHandIfResult << endl;



	// we can put anything in true or false [ in the expression ] 

	// we can call a function for example 


	// we can excecute without helping string like this 


	(Mark >= 50) ? cout << "Pass\n\n" : cout << "Fail";


	// we also can make nested ternary operator 

	int Mark1 = 49;

	cout << ( (Mark >= 50) ? (Mark1 <= Mark) ? "YouMust Work Hard" : "Dont Give up" : "Fail"  )<< endl;



	
}