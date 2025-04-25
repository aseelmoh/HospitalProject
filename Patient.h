// ✅ FILE 1: Patient.h
#ifndef PATIENT_H
#define PATIENT_H
#include <string>
using namespace std;

struct Patient {
    string id;
    string name;
    int age;
    string condition;
};

#endif