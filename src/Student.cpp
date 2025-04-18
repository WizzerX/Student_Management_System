#include<string>
#include<iostream>
#include "../Header/Student.h"
#include<fstream>


using namespace std;

	

StudentManager::StudentManager(){}

StudentManager::StudentManager(string name, string address, string section, char gender, int roll, string phone)
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
    string name, address, phone_number, section;
    char gender;
    int roll;

    ifstream File("Student.txt");

    while (getline(File, name)) {
        getline(File, address);
        getline(File, phone_number);
        getline(File, section);
        File >> gender;
        File >> roll;
       

        cout << name << " \n	" << address << " \n " << phone_number << " \n " 
             << section << " \n " << gender << " \n " << roll << "\n";
    }

    File.close();
}





void StudentManager::AddStudent()
{
	/*
		cout << "Name:" << V.Name << "\n";
		cout << "Roll:" << V.Roll << "\n";
		cout << "Section:" << V.Section << "\n";
		cout << "Phone number:" << V.Phone_Number << "\n";
		cout << "Address:" << V.Address << "\n";
		cout << "Gender:" << V.Gender << "\n";
		*/


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
	cin >> Gender;



	cout << "Enter the roll" << "\n";

	cin >> Roll;

	ofstream File("Student.txt", ios::app);
	if (!File) {
		cout << "Error in creating the file\n";

	}
	File << Name << " , " << Address << " , " << Section << " , " << Gender << " , " << Roll << " , " << Phone_Number << " \n ";

	File.close();
	cout << "Data saved sucessfully...!\n";







	Vectorstudent.push_back(StudentManager(Name, Address, Section, Gender, Roll, Phone_Number));

	cin.clear();
}
void StudentManager::RemoveStudent(string name)
	{
		for (auto it=Vectorstudent.begin();it<Vectorstudent.end();) {

			if (name == it->Name) {
				
				Vectorstudent.erase(it);

				break;
			}
			else {
				it++;

			}
		}



	}

	void StudentManager::SearchStudent(string Searchname)
	{
		ifstream File("Student.txt");

		if (!File.is_open()) {

			cout << "Error in File opening\n";

		}
		


		while (getline(File, Name)) {
			getline(File, Address);
			getline(File, Section);
			File >> Gender; File.ignore();
			File >> Roll; File.ignore();
			getline(File, Phone_Number);





			if (Searchname == Name) {
				cout << "Name found!\n";
				cout << "Name:" << Name << "\n";
				cout << "Roll:" << Roll << "\n";
				cout << "Section:" << Section << "\n";
				cout << "Phone number:" << Phone_Number << "\n";
				cout << "Address:" << Address << "\n";
				cout << "Gender:" << Gender << "\n";
			}

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

		






	

	




