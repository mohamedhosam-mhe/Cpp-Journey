// 27- structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    // We can use structures to organise our code [ User-defined data type ]
    // We are using it to group a punch of related variables in one place and import them when needed

  

    struct OAdress {

        string adress;
        string Housenumber;
    };

    struct COwner {

        string FullName;
        string Orign;
        OAdress Location;

    };


    struct Car {

        string Brand;
        string Model;
        int Year;
        //We can make nested structures
        COwner  owner;


    };

    Car MyCar1, MyCar2; // We can use the structure as a data type 
    COwner owner1,owner2;

    owner1.FullName = "Ahmed";
    owner2.Location.adress = "Al-Ain";
    owner1.Orign = " Egypt";


    // We can access the attributes of te new variable with our defined structure name 
    MyCar1.Brand = "Mercedece";
    MyCar1.Model = "Benz";
    MyCar1.Year = 2025;

    MyCar1.owner.FullName = "Mohamed Hosam";
    MyCar1.owner.Orign = "Egypt";

    cout << "My Car Brand is : " << MyCar1.Brand << endl;
    cout << "Myy Car Model is : " << MyCar1.Model << endl;
    cout << "The owner of this car is : " << MyCar1.owner.FullName << endl;


    MyCar2.Brand = "BMW";
    MyCar2.Brand = "X3";
    MyCar2.Year = 2010;


    // We can access alot of nested structures 

    MyCar1.owner.Location.adress = "Al Yahar";

    cout << "Customer Location of first Car : " << MyCar1.owner.Location.adress << endl;

}

