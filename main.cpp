
// ✅ FILE 8: main.cpp
#include "GeneralPatientList.h"
#include <iostream>
using namespace std;

int main() {
    GeneralPatientList gp;
    string choice;
    while (true) {
        cout << "\nOptions:\n1. Add Patient\n2. Search by Name\n3. Show All\n4. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == "1") {
            Patient p;
            cout << "Enter ID: "; cin >> p.id;
            cout << "Enter Name: "; cin.ignore(); getline(cin, p.name);
            cout << "Enter Age: "; cin >> p.age;
            cout << "Enter Condition: "; cin.ignore(); getline(cin, p.condition);
            gp.addPatient(p);
        } else if (choice == "2") {
            string name;
            cout << "Enter name to search: "; cin.ignore(); getline(cin, name);
            gp.searchByName(name);
        } else if (choice == "3") {
            gp.displayPatients();
        } else if (choice == "4") {
            break;
        } else {
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}