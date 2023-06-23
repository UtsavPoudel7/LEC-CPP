#include <iostream>
using namespace std;

class A
{
private:
    int a, b, c;

public:
    A(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    A operator-() // No const keyword
    {
        A temp(-a, -b, -c);
        return temp;
    }

    void display()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    A obj(5, 6, 7);
    A negObj = -obj; // Apply the unary minus operator on obj and store the result in negObj
    negObj.display();
    return 0;
}
