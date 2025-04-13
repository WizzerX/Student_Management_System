#include<string>
#include<iostream>
#include "../Header/Student.h"


using namespace std;

	

StudentManager::StudentManager(){}

StudentManager::StudentManager(string name, string address, string section, char gender, int roll, int phone)
{
	
	Name = name;
	Roll = roll;
	Section = section;
	Phone_Number = phone;
	Gender = gender;
	Address = address;
	

}






void StudentManager::display()
	{
	for (int i = 0;i<Vectorstudent.size();i++) {

		//Vectorstudent[i].
		cout << "Name:" << Vectorstudent[i].Name << "\n";
		cout << "Roll:" << Vectorstudent[i].Roll << "\n";
		cout << "Section:" << Vectorstudent[i].Section << "\n";
		cout << "Phone number:" << Vectorstudent[i].Phone_Number << "\n";
		cout << "Address:" << Vectorstudent[i].Address << "\n";
		cout << "Gender:" << Vectorstudent[i].Gender << "\n";

	}

	}



	void StudentManager::AddStudent()
	{
		cin.ignore();
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



		Vectorstudent.push_back(StudentManager( Name, Address, Section, Gender, Roll, Phone_Number));


	}

	void StudentManager::RemoveStudent()
	{



	}

	void StudentManager::EditStudent()
	{



	}





