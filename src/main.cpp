#include<iostream>
#include<vector>
#include "../Header/Student.h"
#include<string>


using namespace std;

int main() {
	unique_ptr<StudentManager>Student = make_unique<StudentManager>();


	//Student->AddStudent();
	//Student->display();
	int choice;

	do {
		cout << "\n--- Student Management System ---\n";
		cout << "1. Add Student\n2. Display All\n3. Delete Student\n4. Edit Student\n5. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case1:
			Student->AddStudent();
			




		}
	} while (choice != 6);

	return 0;
}














