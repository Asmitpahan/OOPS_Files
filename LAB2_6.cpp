#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n], b[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    cout << "Second array: ";

    for(int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}