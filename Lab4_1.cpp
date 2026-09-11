#include <iostream>
using namespace std;

class Fibonacci
{
    int n;

public:
    Fibonacci()
    {
        cout << "Enter n: ";
        cin >> n;
    }

    void display()
    {
        int a = 0, b = 1, c;

        cout << "Fibonacci series: ";

        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
    }
};

int main()
{
    Fibonacci obj;
    obj.display();

    return 0;
}