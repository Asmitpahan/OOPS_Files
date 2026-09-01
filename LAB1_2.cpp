#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter a 3-digit number: ";
    cin >> n;

    sum = n / 100 + (n / 10) % 10 + n % 10;

    cout << "Sum of digits = " << sum;

    return 0;
}