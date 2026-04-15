#include <iostream>
using namespace std;

class Student {
private:
    int marks[3];

public:
    void getData() {
        cout << "Enter 3 subject marks: ";
        for(int i = 0; i < 3; i++)
            cin >> marks[i];
    }

    void showAverage() {
        int sum = 0;
        for(int i = 0; i < 3; i++)
            sum += marks[i];

        cout << "Average = " << sum / 3.0 << endl;
    }
};

int main() {
    Student s[3];

    for(int i = 0; i < 3; i++)
        s[i].getData();

    for(int i = 0; i < 3; i++)
        s[i].showAverage();

    return 0;
}