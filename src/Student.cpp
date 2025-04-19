#include<string>
#include<iostream>
#include "../Header/Student.h"
#include<fstream>
#include <algorithm> 
#include <cctype> 
#include <locale>
#include <sstream> 





using namespace std;

	

StudentManager::StudentManager(){}

StudentManager::StudentManager(string name, string address, string section, string gender, string roll, string phone)
{
	
	Name = name;
	Roll = roll;
	Section = section;
	Phone_Number = phone;
	Gender = gender;
	Address = address;
	
	
}



string trim(const string& str) {
	size_t first = str.find_first_not_of(" \t\n\r");
	size_t last = str.find_last_not_of(" \t\n\r");
	return (first == string::npos || last == string::npos) ? "" : str.substr(first, (last - first + 1));
}



void StudentManager::display()
{
	string name, address, phone_number, section, line;
    string gender;
    string roll;
	

    ifstream File("Student.csv");

	

    while (getline(File,name)) {

		
		getline(File, address);
		
		getline(File, phone_number);
        getline(File, section);
		getline(File, gender);
        getline(File ,roll);
	
		cout << "-------------------STUDENT INFO----------------------" << "\n";
		cout << name<<"\n";
		cout << address<<"\n";
		cout << phone_number<<"\n";
		cout << section << "\n";
		cout << gender<<"\n";
		cout<< roll<<"\n";
		cout << "-----------------------------------------------------" << "\n";
    }

    File.close();
}





void StudentManager::AddStudent()
{
	
	cin.ignore();
	cout << "Enter the name " << "\n";
	getline(cin, Name);
	cout << "Enter the address" << "\n";

	getline(cin, Address);

	cout << "Enter the section" << "\n";

	getline(cin, Section);

	cout << "Enter the phone number" << "\n";

	getline(cin, Phone_Number);
	
	cout << "Enter the Gender" << "\n";
	getline(cin, Gender);



	cout << "Enter the roll" << "\n";

	getline(cin, Roll);

	ofstream File("Student.csv", ios::app);
	if (!File) {
		cout << "Error in creating the file\n";

	}




	File << Name << "\n" << Address << "\n"<<Section << "\n" << Gender <<"\n"<< Roll << "\n"<< Phone_Number << "\n";


	cout << "Data saved sucessfully...!\n";




	

	Vectorstudent.push_back(StudentManager(Name, Address, Section, Gender, Roll, Phone_Number));
	File.close();
	
}
void StudentManager::RemoveStudent(string name)
	{
	string line;
	ifstream File("Student.csv", ios::out);
		if (!File.is_open()) {

			cout << "ERROR IN OPENING FILE!\n";

	}
		while (getline(File, line)) {

			if (name == line) {
				
			}


		}



	}




	void StudentManager::SearchStudent( string Searchname)
	{
		string name, address, phone_number, section, line;
		string gender;
		string roll;
		bool flag = false;

		ifstream File("Student.csv");

		if (!File.is_open()) {

			cout << "Error in File opening\n";

		}

		




		while (getline(File,name)) {
			
			getline(File, address);
			getline(File, section);
			getline(File, roll);
			getline(File, phone_number);
			getline(File, gender);
		


	
		if (name==Searchname) {
			flag = true;
				cout << "----------------------STUDENT DATA----------------------\n";
				cout << "Name found!\n";
				cout << "Name:" << name << "\n";
				cout << "Roll:" << roll << "\n";
				cout << "Section:" << section << "\n";
				cout << "Phone number:" << phone_number << "\n";
				cout << "Address:" << address << "\n";
				cout << "Gender:" << gender << "\n";
				cout << "-----------------------------------------------------------\n";
			}

		}
		
		if (!flag) {
			cout << "No Student Found!\n";


		}
		File.close();

		

	}

	void StudentManager::EditStudent(string Editname)
	{

		/**
		for (auto& j : Vectorstudent) {

			if (j.Name == name) {

				cout << "************Current Deatail of student*************\n";
				cout << "Name:" << j.Name << "\n";
				cout << "Roll:" << j.Roll << "\n";
				cout << "Section:" << j.Section << "\n";
				cout << "Phone number:" << j.Phone_Number << "\n";
				cout << "Address:" << j.Address << "\n";
				cout << "Gender:" << j.Gender << "\n";
		*/

		ofstream WriteFile("Student.csv", ios::app);
		ifstream ReadFile("Student.csv");
		string name, address, phone_number, section, line, gender, roll;
		while (getline(ReadFile, name)) {
			getline(ReadFile, address);
			getline(ReadFile, section);
			getline(ReadFile, phone_number);
			getline(ReadFile, gender);
			getline(ReadFile, roll);

			Vectorstudent.push_back(StudentManager(name, address, section, gender, roll, phone_number));
		}
					
		for (auto& g : Vectorstudent) {

			
			
			if (g.Name == Editname) {

				int ch;
				do {
					cout << "**************CURRENT DATA OF STUDENT************************\n";
					cout << "NAME:" << g.Name << "\n";
					cout << "ADDRESS:" << g.Address << "\n";
					cout << "ROLL:" << g.Roll << "\n";
					cout << "SECTION:" << g.Section << "\n";
					cout << "PHONE NUMBER:" << g.Phone_Number << "\n";
					cout << "GENDER:" << g.Gender << "\n";
					cout << "*****************************************************************\n";

					cout << "press 1 for Name\npress 2 for roll\npress 3 section \npress 4 phone_number \npress 5 address \npress 6 gender\npress 7 Exit\n";
					cin >> ch;
					cin.ignore();

					switch (ch)
					{
					case 1:

						cout << "Current Name:" << "\n";


						break;
					case 2:
						cout << "Current Roll:" << "\n";

						break;
					case 3:
						cout << "Current Section" << "\n";

						break;
					case 4:
						cout << "Current Phone Number" << "\n";

						break;
					case 5:
						cout << "Current Address" << "\n";
				

						break;
					case 6:
						cout << "current Gender:" << "\n";

						break;

					}



				} while (ch != 7);



			}
		}

		
	}

	

		






	

	




