#include<iostream>
#include <string>
#include<vector>

using namespace std;



class StudentManager
{
private:
	string Gender;
	string Name;
	string Roll;
	string Address;
	string Section;
	string  Phone_Number;
	
	

public:
	StudentManager();
	StudentManager(string name, string address, string section, string gender,string  roll, string phone);
	
	void display();
	

	vector <StudentManager>Vectorstudent;

	/*********************Setter************************/
	void AddStudent();
	void RemoveStudent(string name);
	void SearchStudent(string Searchname);
	void EditStudent(string name);

	
	

	/*********************Getter************************/
	string GetName() { return Name; }
	string getRoll() { return Roll; }
	string getphonenumber() { return Phone_Number; }
	string getAddress() { return Address; }
	string getSection() { return Section; }
	string  getGender() { return Gender; }


};