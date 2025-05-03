// FILE 7: GeneralPatientList.cpp
#include "GeneralPatientList.h"

GeneralPatientList::GeneralPatientList() : head(nullptr) {}

void GeneralPatientList::addPatient(Patient p) {
    GeneralPatientNode* newNode = new GeneralPatientNode{p, nullptr};
    if (!head) {
        head = newNode;
    } else {
        GeneralPatientNode* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Patient added to general records: " << p.name << endl;
}

void GeneralPatientList::displayPatients() {
    cout << "\n--- General Patient Records ---" << endl;
    GeneralPatientNode* temp = head;
    while (temp) {
        cout << "ID: " << temp->data.id << ", Name: " << temp->data.name
             << ", Age: " << temp->data.age << ", Condition: " << temp->data.condition << endl;
        temp = temp->next;
    }
    cout << "-------------------------------\n";
}

void GeneralPatientList::searchByName(string name) {
    GeneralPatientNode* temp = head;
    while (temp) {
        if (temp->data.name == name) {
            cout << "\nPatient Found:\n";
            cout << "ID: " << temp->data.id << ", Name: " << temp->data.name
                 << ", Age: " << temp->data.age << ", Condition: " << temp->data.condition << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "\nPatient not found." << endl;
}
