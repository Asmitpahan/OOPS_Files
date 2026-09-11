#include <iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:

    // Default constructor
    Student()
    {
        roll = 0;
        marks = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized constructor
    Student(int r, float m)
    {
        roll = r;
        marks = m;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy constructor
    Student(Student &s)
    {
        roll = s.roll;
        marks = s.marks;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Roll = " << roll << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(101, 85.5);
    s2.display();

    Student s3(s2);
    s3.display();

    return 0;
}