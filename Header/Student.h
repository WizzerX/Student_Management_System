#include<iostream>
#include <string>
#include<vector>

using namespace std;



class StudentManager
{
private:
	char Gender;
	string Name;
	int Roll;
	string Address;
	string Section;
	string  Phone_Number;
	
	

public:
	StudentManager();
	StudentManager(string name, string address, string section, char gender, int roll, string phone);
	
	void display();
	

	vector <StudentManager>Vectorstudent;

	/*********************Setter************************/
	void AddStudent();
	void RemoveStudent(string name);
	void SearchStudent(string name);
	void EditStudent(string name);

	
	

	/*********************Getter************************/
	string GetName() { return Name; }
	int getRoll() { return Roll; }
	string getphonenumber() { return Phone_Number; }
	string getAddress() { return Address; }
	string getSection() { return Section; }
	char getGender() { return Gender; }


};