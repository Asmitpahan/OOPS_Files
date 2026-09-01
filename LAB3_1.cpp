#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    string designation;
    int experience;
    int age;

    void input()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter designation: ";
        cin >> designation;

        cout << "Enter years of experience: ";
        cin >> experience;

        cout << "Enter age: ";
        cin >> age;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Designation: " << designation << endl;
        cout << "Experience: " << experience << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}