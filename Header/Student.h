#include<iostream>
#include <string>
#include<vector>
using namespace std;



class StudentManager
{
public:
	char Gender;
	string Name;
	int Roll;
	string Address;
	string Section;
	int Phone_Number;
	
	

public:
	StudentManager();
	StudentManager(string name, string address, string section, char gender, int roll, int phone);
	
	void display();
	

	vector <StudentManager>Vectorstudent;

	/*********************Setter************************/
	void AddStudent();
	void RemoveStudent();
	void EditStudent();


	/*********************Getter************************/
	string GetName() { return Name; }
	int getRoll() { return Roll; }
	int getphonenumber() { return Phone_Number; }
	string getAddress() { return Address; }
	string getSection() { return Section; }
	char getGender() { return Gender; }


};