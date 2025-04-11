#include<iostream>
#include <string>
#include<vector>
using namespace std;



class Student
{
public:
	char gender;
	string Name;
	int Roll=0;
	string Address;
	string Section;
	int Phone_Number=0;
	
	vector<Student>Vectorstudent;

public:
	Student(string name, int Roll, string section, int phonenumber, char gender, string address);

	void display();


	/*********************Setter************************/
	void AddStudent();

	/*********************Getter************************/
	string GetName() { return Name; }
	int getRoll() { return Roll; }
	int getphonenumber() { return Phone_Number; }
	string getAddress() { return Address; }
	string getSection() { return Section; }
	char getGender() { return gender; }


};