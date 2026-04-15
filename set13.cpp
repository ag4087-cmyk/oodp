#include <iostream>
using namespace std;

class Demo {
private:
    int normalVar;
    static int staticVar;

public:
    void setData(int a) {
        normalVar = a;
        staticVar++;
    }

    void display() {
        cout << "Normal Var: " << normalVar << endl;
        cout << "Static Var: " << staticVar << endl;
    }
};

int Demo::staticVar = 0;

int main() {
    Demo d1, d2;

    d1.setData(10);
    d2.setData(20);

    d1.display();
    d2.display();

    return 0;
}