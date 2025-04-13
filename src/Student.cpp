#include<string>
#include<iostream>
#include "../Header/Student.h"


using namespace std;

	

StudentManager::StudentManager(){}

StudentManager::StudentManager(string name, string address, string section, char gender, int roll, int phone)
{
	/*
	cout << "Enter the name " << "\n";
	Name = name;
	cout << "Roll:" <<  "\n";
	Roll = roll;
	cout << "Section:" <<  "\n";
	Section = section;
	cout << "Enter the phone number" << "\n";
	Phone_Number = phone;
	*/

}





void StudentManager::display()
	{
	for (const auto& s : Vectorstudent) {


		cout << "Name:" << Name << "\n";
		cout << "Roll:" << Roll << "\n";
		cout << "Section:" << Section << "\n";
		cout << "Phone number:" << Phone_Number << "\n";
		cout << "Address:" << Address << "\n";
		cout << "Gender:" << Gender << "\n";

	}

	}



	void StudentManager::AddStudent()
	{
		cout << "Enter the name " << "\n";
		getline(cin, Name);
		cout << "Enter the roll" << "\n";
		cin >> Roll;
		cout << "Enter the address" << "\n";
		cin.ignore();
		getline(cin, Address);
		cout << "Enter the section" << "\n";
		cin.ignore();
		getline(cin, Section);
		cout << "Enter the phone number" << "\n";
		cin.ignore();
		cin >> Phone_Number;
		cout << "Enter the Gender" << "\n";
		cin >> Gender;



		Vectorstudent.emplace_back(Name, Address, Section, Gender, Roll, Phone_Number);


	}





