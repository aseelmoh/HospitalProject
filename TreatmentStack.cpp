// ✅ FILE 5: TreatmentStack.cpp
#include "TreatmentStack.h"
#include <iostream>

TreatmentStack::TreatmentStack() : top(nullptr) {}

void TreatmentStack::push(Treatment t) {
    TreatmentNode* newNode = new TreatmentNode{t, top};
    top = newNode;
    cout << "Treatment pushed for patient " << t.patientID << ": " << t.treatmentDetails << endl;
}

void TreatmentStack::pop() {
    if (top == nullptr) {
        cout << "No treatments to undo." << endl;
        return;
    }
    cout << "Undoing treatment for patient " << top->data.patientID << ": " << top->data.treatmentDetails << endl;
    TreatmentNode* temp = top;
    top = top->next;
    delete temp;
}

bool TreatmentStack::isEmpty() {
    return top == nullptr;
}