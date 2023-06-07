#include <iostream>
using namespace std;

class vechile
{
private:
    int platenumber;

public:
    int getnumber()
    {
        cout << "ENter the number sccooter:"<<endl;
        // cin >> platenumber;
        // return platenumber;
    }

    void number(int x)
    {
        platenumber = x;
        cout << "The number plate is " << platenumber;
    }
};

int main()
{
    vechile scooter;
    // scooter.platenumber=8634;
    scooter.getnumber();
    scooter.number(7);
    return 0;
}