// FILE 6: GeneralPatientList.h
#ifndef GENERAL_PATIENT_LIST_H
#define GENERAL_PATIENT_LIST_H
#include "Patient.h"
#include <iostream>
using namespace std;

struct GeneralPatientNode {
    Patient data;
    GeneralPatientNode* next;
};

class GeneralPatientList {
private:
    GeneralPatientNode* head;

public:
    GeneralPatientList();
    void addPatient(Patient p);
    void displayPatients();
    void searchByName(string name);
};

#endif
