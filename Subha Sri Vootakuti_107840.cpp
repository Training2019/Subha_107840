#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	int Id;
	string firstName, lastName, group;
	void acceptPerson() {
		cout << "Enter Id" << endl;
		cin >> Id;
		cout << "Enter FirstName" << endl;
		cin >> firstName;
		cout << "Enter LastName" << endl;
		cin >> lastName;
		cout << "Enter Group" << endl;
		cin >> group;
		cout << endl;
	}
	void displayPerson() {
		cout << "Id: " << Id << " FirstName: " << firstName << " LastName: " << lastName << " Group: " << group << endl;
	}
};

class UgStudent :public Person {
public:
	string UG_Group;
	void assignGroup(string m) {
		UG_Group = m;
	}
	void printGroup() {
		cout << UG_Group << endl;
	}
};

class Sports {
public:
	string sportName;
	void assignSportName(string sp) {
		sportName = sp;
	}
	void printSport() {
		cout << sportName << endl;
	}
};

class PGStudent : public UgStudent, public Sports {
public:
	string PG_Group;
};

int main() {
	
	PGStudent pgObj[25];
	int choice, sid;
	int pos = 0;
	do {
		cout << "\n1.Enter 1 to add data in student array\n  2.Enter 2 to display data from array\n  3.Enter Id to search data" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			pgObj[pos].acceptPerson();
			pos++;
			break;
		case 2:
			for (int k = 0; k < pos; k++) {
				pgObj[k].displayPerson();
			}
			break;
		case 3:
			cout << "Enter id to search" << endl;
			cin >> sid;
			for (int l = 0; l < pos; l++) {
				if (pgObj[l].Id == sid) {
					pgObj[l].displayPerson();
				}
				else {
					cout << "Id is not macthed" << endl;
				}
			}

			break;

		}
	} while (choice < 6);
}

