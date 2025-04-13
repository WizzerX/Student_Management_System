#include<iostream>
#include<vector>
#include "../Header/Student.h"
#include<string>


using namespace std;

int main() {
	unique_ptr<StudentManager>Student = make_unique<StudentManager>();


	
	int choice;

	do {
		cout << "\n--- Student Management System ---\n";
		cout << "1. Add Student\n2. Display All\n3. Delete Student\n4. Edit Student\n5. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			Student->AddStudent();
			break;
		case 2:
			Student->display();
			break;

		case 3:
			Student->RemoveStudent();
			break;
		case 4:
			Student->EditStudent();
			break;
					
		case 5:
			cout << "Exiting.......\n";
			break;
			




		}
	} while (choice != 5);

	return 0;
}














