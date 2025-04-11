#include<string>
#include<iostream>
#include "../Header/Student.h"


using namespace std;

Student::Student(string name,int Roll,string section,int phonenumber,char gender,string address)
{
	






}

void Student::display()
{
			cout << "Name:" << Name << "\n";
			cout << "Roll:" << Roll << "\n";
			cout << "Section:" << Section << "\n";
			cout << "Phone number:" << Phone_Number << "\n";
			cout << "Address:" << Address << "\n";

	

}



void Student::AddStudent()
{
	cout << "Enter the name " << "\n";
	getline(cin,Name);
	cout << "Enter the roll" << "\n";
	cin >> Roll;
	cout << "Enter the address" << "\n";
	cin.ignore();
	getline(cin, Address);
	cout << "Enter the section" << "\n";
	cin.ignore();
	getline(cin, Section);
	cout << "Enter the phone number" << "\n";
	cin >> Phone_Number;




}







