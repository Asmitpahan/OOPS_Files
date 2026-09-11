#include <iostream>
using namespace std;

class Array
{
    int a[100];
    int n;

public:

    Array()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void sum()
    {
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            total = total + a[i];
        }

        cout << "Sum = " << total;
    }
};

int main()
{
    Array *ptr;

    ptr = new Array();

    ptr->sum();

    delete ptr;

    return 0;
}