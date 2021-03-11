// these are programming exercises from reaading the first chapter
// below are header files
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// place holder for constant variables



// the main program function start here

int main(){
	// the function body

	// the input /output
	
	cout << "***************************"<<endl;
	cout << "*" <<" programing practice one " "*"<<endl;               
	cout << "*" <<"    computer science     " "*"<<endl;
	cout << "*" <<"    Author : The RAT     " "*"<<endl;
	cout << "*" <<"Due Date: Thursday,Jan.24" "*"<<endl;
	cout << "***************************"<<endl;
	
	//next attempt
	
	cout<<"CCCCCCCC"<<"              "<<"++"<<"                      "<<"++"<<"              "<<endl;
	cout<<"CC"<<"                    "<<"++"<<"                      "<<"++"<<"              "<<endl;
	cout<<"CC"<<"              "<<"++++++++++++++"<<"         "<<"++++++++++++++"<<"         "<<endl;
	cout<<"CC"<<"              "<<"++++++++++++++"<<"         "<<"++++++++++++++"<<"         "<<endl;
	cout<<"CC"<<"                    "<<"++"<<"                      "<<"++"<<"              "<<endl;
	cout<<"CCCCCCCC"<<"              "<<"++"<<"                      "<<"++"<<"              "<<endl;
	
	
	
	string name;
	double studyHours;
	
	
	cout<<" enter name then enter studyHours "<<endl;
	cin>> name >>studyHours;
	
	cout<<" Hello " <<name <<" you need to study "<<studyHours<<endl;
	// next attempt
	
	//named constatnts

	const int SECRET=1;
	const double RATE=12.50;
	
	int num1;
	int num2;
	
	cout<<"enter the two numbers from the keyboard"<<endl;
	
	cin>>num1 >>num2;
	cout <<"num1: "<<num1 <<"num2"<<num2<<endl;
	int newNum;
	newNum=(num1*2)+num2;
	cout<< "the value of the new number is "<<newNum<<endl;
	
	
	double hoursWorked;
	string lastName;
	cout<<"enter the last name  then the hours worked in decimal points:"<<endl;
	cin>>lastName;
	cin>>hoursWorked;
	
	
	int wages;
	
	wages=RATE*hoursWorked;
	cout<<"LastName: "<<lastName<<endl;
	cout<< lastName <<" worked " <<hoursWorked <<" hours. "<<endl;
	cout<<"PayRate: "<<endl;
	cout<<lastName <<" deserves "<<wages<<"shillings as salary"<<endl;
		return 0;
}
