#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void getData() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main() {
    Student s[3];
    Student *ptr = s;

    for(int i = 0; i < 3; i++) {
        (ptr + i)->getData();
    }

    for(int i = 0; i < 3; i++) {
        (ptr + i)->display();
    }

    return 0;
}