#include "GeneralPatientList.h"
#include "TreatmentStack.h"
#include <iostream>
using namespace std;

int main() {
    GeneralPatientList gp;
    TreatmentStack treatmentStack;
    string choice;

    while (true) {
        cout << "\nOptions:\n";
        cout << "1. Add Patient\n";
        cout << "2. Search by Name\n";
        cout << "3. Show All Patients\n";
        cout << "4. Add Treatment\n";
        cout << "5. Undo Last Treatment\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
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
            Treatment t;
            cout << "Enter Patient ID: "; cin >> t.patientID;
            cin.ignore();
            cout << "Enter Treatment Details: "; getline(cin, t.treatmentDetails);
            treatmentStack.push(t);

        } else if (choice == "5") {
            treatmentStack.pop();

        } else if (choice == "6") {
            break;

        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
} 
