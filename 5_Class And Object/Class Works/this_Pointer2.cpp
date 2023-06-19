#include <iostream>
using namespace std;

class Mobile
{
    int m = 10;

public:
    void display()
    {
        cout << "value of m is " << m<<endl;
        cout << "value of ?? " << this->m<<endl;
        cout << "the address of current obj is  " << this<<endl;
    }
};

int main()
{
    Mobile m1, m2;
    m1.display();
    m2.display();

    return 0;
}
