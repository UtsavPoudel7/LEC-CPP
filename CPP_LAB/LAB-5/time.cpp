#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    Time()
    {
        hr = 12;
        min = 0;
        sec = 0;
    }
    Time(int seconds)
    {
        hr = seconds / 3600;
        min = (seconds % 3600) / 60;
        sec = (seconds % 3600) % 60;
    }

    Time(Time &p)
    {
        hr = p.hr;
        min = p.min;
        sec = p.sec;
    }

    void display()
    {
        cout << "Time: " << hr << " hr " << min << " min " << sec << " sec" << endl;
    }
};

int main()
{
    Time t1;
    t1.display();

    int seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;

    Time t2(seconds);
    t2.display();

    Time t3(t1);
    t3.display();

    return 0;
}