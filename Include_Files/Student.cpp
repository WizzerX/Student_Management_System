#include<string>
#include<iostream>
#include "../Header/Student.h"


using namespace std;

Data::Data()
{
	//cout << "Enter the name" << endl;






}

void Data::display()
{
	cout << "Name:" << Name << "\n";
	cout << "Roll:" << Roll << "\n";
	cout << "Section:" << Section << "\n";
	cout << "Phone number:" << Phone_Number << "\n";
	cout << "Address:" << Address << "\n";



}



void Data::AddData()
{
	cout << "Enter the name " << "\n";
	getline(cin,Name);
	cout << "Enter the roll" << "\n";
	cin >> Roll;
	cout << "Enter the address" << "\n";
	cin.ignore();
	getline(cin, Address);
	cout << "Enter the section" << "\n";
	cin.ignore();
	getline(cin, Section);
	cout << "Enter the phone number" << "\n";
	cin >> Phone_Number;




}

void Data::GetName(string name) const
{

   
}

void Data::getRoll(int roll) const
{



}

void Data::getAddress(string address)const
{




}

void Data::getSection(string section)const
{




}
