// 2-Output in c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // This is \n new line scapesequence 
    std::cout << "My name is Mohamed\n";
    std::cout << "I'm 25 years old\n\n";
    std::cout << "I'm an Engineer\n";

    // This is making new line using endl
    std::cout << "Hello From the other side " << std::endl << std:: endl;
    std::cout << "How is this working " << std::endl << std:: endl;

    // This is how we can make multiple outputs in the same cout 
    
    std::cout << "First Massage " << "Second Massage " << "Third Massage \n\n";
    std::cout << "10 + 5 = " << 10+5 << "  We can make simple equations \n\n\n";

    // if we want to ommit std:: We can import it in the bignning of the program

    cout << "My name is Mohamed\n";
    cout << "I'm 25 years old " << endl << endl;
    cout << "I'm an Engineer\n";


    // Now what is the difference between \n and endl and why there is more than one way of making a new line 

    // The main difference between them is \n are stored in buffer and the buffer is flushed after excution of the progrm
    // Wher endl is flushing the buffer every single call
    // so, if we have alot of new lines we will use \n for some lines and make endl after awhile to flush the buffer to prevent slowing the progam


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
