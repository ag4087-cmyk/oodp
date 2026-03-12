#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
};

class Manager : public Employee
{
    string dept;
    float salary;

public:
    void getData()
    {
        cout<<"Enter ID and Name: ";
        cin>>id>>name;
        cout<<"Enter Department and Salary: ";
        cin>>dept>>salary;
    }

    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main()
{
    Manager m;
    m.getData();
    m.display();
}