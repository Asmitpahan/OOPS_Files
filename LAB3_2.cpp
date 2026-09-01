#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int rev = 0, digit;

    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse = " << reverseNumber(n);

    return 0;
}