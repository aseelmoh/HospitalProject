
// ✅ FILE 4: TreatmentStack.h
#ifndef TREATMENT_STACK_H
#define TREATMENT_STACK_H
#include <string>
using namespace std;

struct Treatment {
    string patientID;
    string treatmentDetails;
};

struct TreatmentNode {
    Treatment data;
    TreatmentNode* next;
};

class TreatmentStack {
private:
    TreatmentNode* top;

public:
    TreatmentStack();
    void push(Treatment t);
    void pop();
    bool isEmpty();
};

#endif