#include<iostream>
#include <string>
using namespace std;



class Data
{
public:
	string Name;
	int Roll=0;
	string Address;
	string Section;
	int Phone_Number=0;
	
public:
	Data(//string name, int roll, string address,
		//string section,
		);

	void display();


	/*********************Setter************************/
	void AddData();

	/*********************Getter************************/
	void GetName(string name) const;
	void getRoll(int roll)const;
	void getAddress(string address) const;
	void getSection(string section) const;

};
