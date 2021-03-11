// file headers
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
		//this is the second day of programming with c++ basics

		//names constants
 const double CENTIMETRES_PER_INCH = 2.54;
 const int INCHES_PER_FOOT = 12;
 // another constants
 
 const int HALF_DOLLAR = 50;
 const int QUARTER = 25;
 const int DIME = 10;
 const int NICKEL = 5;
 
 
int main(){
	// the main function body
	
 //declaring variables
 int feet, inches;
 int totalInches;
 double centimeter;
 
 // program statements about the input and out put with constant variables
 
 cout <<"Enter two ints, feet"<< "then inches "<<endl;
 cin >> feet >> inches ;
 cout << " The numbers you entered are " << feet
	  << " for feet and " << inches <<" for inches. "<<endl;
	  
 totalInches = INCHES_PER_FOOT * feet + inches;
 
 cout <<" The total number of inches = "<< totalInches <<endl;
 
 centimeter = CENTIMETRES_PER_INCH * totalInches;
 
 cout <<" The number of centimeters = "<< centimeter <<endl;
 
 
 //the change program with dollas
// variable declaration
int change;

//program statments
cout << "enter change in cents: ";
	cin >>change;
		cout <<endl;
			cout <<" change = "<<endl;

cout <<"The number of half-dollar to be returned after change is: "
	 <<change/HALF_DOLLAR <<endl;
	 
 		change = change% HALF_DOLLAR;
	cout << "The number of quarters to be returned after change is: "
		 <<change / QUARTER <<endl;

		change = change%QUARTER;

cout << "The number of dimes to be returned after change is :"
	 <<change / DIME << endl;
	 
 		change = change % DIME;
 
 cout << "the number of nickels to be returned after change is: "
	  << change / NICKEL <<endl;
 		change = change % NICKEL;
 
 cout << "the number of pennies to be returned after change is "
	  <<change <<endl;
  




	return 0;
}


/*
// this is the structure of the c++ program

#include <iostream>

using namespace std;

// place holder for named constants

int main(){


statments_1
	.
	.
	.
statment_n

return 0;

}

*/
