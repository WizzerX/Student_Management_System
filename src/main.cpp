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
		cout << "1. Add Student\n2. Display All\n3. Delete Student\n4. Edit Student\n5. Search \n6. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
		case 1:
			Student->AddStudent();
			break;
		case 2:
			Student->display();
			break;

		case 3: {
			string xame;
			cout << "Enter the name to remove" << "\n";
			cin.ignore();
			cin >> xame;
			Student->RemoveStudent(xame);
			break;
		}
		case 4: {
			string name;
			cout << "Enter the name\n";
			cin.ignore();
			getline(cin, name);

			Student->EditStudent(name);
			break;
		}
		case 5: {
			string Name;
			cout << "Enter the name to edit\n";

			cin >> Name;
			Student->SearchStudent(Name);
			break;

		}
		case 6:
			cout << "Exiting.....\n";
			cout << "Done\n";
			break;



		}
	} while (choice != 6);


	return 0;
}














