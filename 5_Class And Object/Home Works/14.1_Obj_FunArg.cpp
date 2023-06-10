// Adding two different time zones.

#include <iostream>
using namespace std;

class Time
{
    int hrs, min;

public:
    void getdata_1()
    {
        cout << "Enter hours and minute of your country :" << endl;
        cin >> hrs >> min;
    }
    void getdata_2()
    {
        cout << "Enter hours and minute of your favourite country :" << endl;
        cin >> hrs >> min;
    }

    void showdata_1()
    {
        cout << "Entered time of your country is :" << hrs << ":" << min << endl;
    }

    void showdata_2()
    {
        cout << "Entered time of your favourite country is :" << hrs << ":" << min << endl;
    }

    void showdata_3()
    {
        cout << "Addition of time is :" << hrs << ":" << min << endl;
    }

    void add(Time t1, Time t2)
    {
        hrs = (t1.min + t2.min) / 60;
        min = (t1.min + t2.min) % 60;

        hrs = hrs + (t1.hrs + t2.hrs);
    }
};

int main()
{
    Time t1, t2, t3;

    t1.getdata_1();
    t2.getdata_2();

    t1.showdata_1();
    t2.showdata_2();

    t3.add(t1, t2);
    t3.showdata_3();
}
