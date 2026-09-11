#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:

    void input()
    {
        cout << "Enter hours, minutes and seconds: ";
        cin >> h >> m >> s;
    }

    void display()
    {
        cout << h << " hours "
             << m << " minutes "
             << s << " seconds";
    }

    friend Time add(Time, Time);
};

Time add(Time t1, Time t2)
{
    Time t3;

    t3.s = t1.s + t2.s;
    t3.m = t1.m + t2.m;
    t3.h = t1.h + t2.h;

    if (t3.s >= 60)
    {
        t3.s = t3.s - 60;
        t3.m++;
    }

    if (t3.m >= 60)
    {
        t3.m = t3.m - 60;
        t3.h++;
    }

    return t3;
}

int main()
{
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.input();

    cout << "Enter second time:" << endl;
    t2.input();

    t3 = add(t1, t2);

    cout << "Total time = ";
    t3.display();

    return 0;
}