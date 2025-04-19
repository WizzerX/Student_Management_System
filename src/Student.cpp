#include<string>
#include<iostream>
#include "../Header/Student.h"
#include<fstream>



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






void StudentManager::display()
{
	string name, address, phone_number, section, line;
    string gender;
    string roll;
	

    ifstream File("Student.txt");

	

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

	ofstream File("Student.txt", ios::app);
	if (!File) {
		cout << "Error in creating the file\n";

	}

	File << trim(Name) << "\n";
	File << trim(Address) << "\n";
	File << trim(Section) << "\n";
	File << trim(Roll) << "\n";
	File << trim(Phone_Number) << "\n";
	File << trim(Gender) << "\n";



	//File << Name << " , " << Address << " , " << Section << " , " << Gender << " , " << Roll << " , " << Phone_Number<<"\n";


	cout << "Data saved sucessfully...!\n";




	

	Vectorstudent.push_back(StudentManager(Name, Address, Section, Gender, Roll, Phone_Number));
	File.close();
	
}
void StudentManager::RemoveStudent(string name)
	{
	string line;
	ifstream File("Student.txt", ios::out);
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

		ifstream File("Student.txt");

		if (!File.is_open()) {

			cout << "Error in File opening\n";

		}

		

		Searchname = trim(Searchname);
		
	
		while (getline(File,name)) {
			
			getline(File, address);
			getline(File, section);
			getline(File, roll);
			getline(File, phone_number);
			getline(File, gender);
			name = trim(name);
			
		if (name==Searchname) {

				cout << "----------------------STUDENT DATA----------------------\n";
				cout << "Name found!\n";
				cout << "Name:" << name << "\n";
				cout << "Roll:" << roll << "\n";
				cout << "Section:" << section << "\n";
				cout << "Phone number:" << phone_number << "\n";
				cout << "Address:" << address << "\n";
				cout << "Gender:" << gender << "\n";
				flag = true;
				cout << "-----------------------------------------------------------\n";
			}

		}
		if (!flag) {
			cout << "No Student Name Found!\n";
		}
		

		File.close();

		

	}

	void StudentManager::EditStudent(string name)
	{


		for (auto& j : Vectorstudent) {

			if (j.Name == name) {

				cout << "************Current Deatail of student*************\n";
				cout << "Name:" << j.Name << "\n";
				cout << "Roll:" << j.Roll << "\n";
				cout << "Section:" << j.Section << "\n";
				cout << "Phone number:" << j.Phone_Number << "\n";
				cout << "Address:" << j.Address << "\n";
				cout << "Gender:" << j.Gender << "\n";
				int ch;
				do {
				
					
						cout << "press 1 for Name\npress 2 for roll\npress 3 section \npress 4 phone_number \npress 5 address \npress 6 gender\npress 7 Exit\n";
						cin >> ch;
						cin.ignore();

						switch (ch)
						{
						case 1:

							cout << "Current Name:" << j.Name << "\n";
							getline(cin, j.Name);

							break;
						case 2:
							cout << "Current Roll:" << j.Roll << "\n";
							cin >> j.Roll;
							break;
						case 3:
							cout << "Current Section" << j.Section << "\n";
							getline(cin, j.Section);
							break;
						case 4:
							cout << "Current Phone Number" << j.Phone_Number << "\n";
							getline(cin, j.Phone_Number);
							break;
						case 5:
							cout << "Current Address" << j.Address << "\n";
							cin.ignore();
							getline(cin, j.Address);
							break;
						case 6:
							cout << "current Gender:" << j.Gender << "\n";
							cin >> j.Gender;
							break;

						}



					} while (ch != 7);
				


			}

		}
	}

	string StudentManager::trim(const string& str)
	{
		size_t first = str.find_first_not_of(" \t\n\r\f\v");
		size_t last = str.find_last_not_of(" \t\n\r\f\v");

		if (first == string::npos || last == string::npos)
			return ""; // string is all whitespace

		return str.substr(first, (last - first + 1));

		
	}

		






	

	




