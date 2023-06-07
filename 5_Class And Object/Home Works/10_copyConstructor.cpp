#include <iostream>
using namespace std;

class Today
{
private:
    int x, y;

public:
    Today(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "Value of x is " << x;
        cout << "Value of y is " << y;
    }

    Today(Today &p)
    {
        x = p.x;
        y = p.y;
    }
};

void main()
{
    Today obj(7, 77);
    Today obj1(obj);
    obj.display();
    obj1.display();
}