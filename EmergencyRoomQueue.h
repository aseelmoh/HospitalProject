#ifndef EMERGENCY_ROOM_QUEUE_H
#define EMERGENCY_ROOM_QUEUE_H
#include "Patient.h"
#include <iostream>
using namespace std;

struct EmergencyPatient {
    Patient data;
    EmergencyPatient* next;
};

class EmergencyRoomQueue {
private:
    EmergencyPatient* front;
    EmergencyPatient* rear;

public:
    EmergencyRoomQueue();
    void enqueue(Patient p);
    void dequeue();
    void displayQueue();
};

#endif