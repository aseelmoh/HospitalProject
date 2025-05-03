// FILE 3: EmergencyRoomQueue.cpp
#include "EmergencyRoomQueue.h"

EmergencyRoomQueue::EmergencyRoomQueue() : front(nullptr), rear(nullptr) {}

void EmergencyRoomQueue::enqueue(Patient p) {
    EmergencyPatient* newNode = new EmergencyPatient{p, nullptr};
    if (!rear) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Patient added to ER queue: " << p.name << endl;
}

void EmergencyRoomQueue::dequeue() {
    if (!front) {
        cout << "ER queue is empty!" << endl;
        return;
    }
    EmergencyPatient* temp = front;
    cout << "Dequeuing patient: " << temp->data.name << endl;
    front = front->next;
    if (!front) rear = nullptr;
    delete temp;
}

void EmergencyRoomQueue::displayQueue() {
    EmergencyPatient* temp = front;
    cout << "\n--- Emergency Room Queue ---" << endl;
    while (temp) {
        cout << "ID: " << temp->data.id << ", Name: " << temp->data.name
             << ", Age: " << temp->data.age << ", Condition: " << temp->data.condition << endl;
        temp = temp->next;
    }
    cout << "-----------------------------\n";
}
