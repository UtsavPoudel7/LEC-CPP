#include <iostream>
using namespace std;

class demo
{
    int a;

public:
    demo() // Default Constructor
    {
        a = 10;
    }

    demo(int x) // Parameterized Constructor
    {
        a = x;
    }

    demo(demo &z) // Copy Constructor
    {
        a = z.a;
    }

    void putdata()
    {
        cout << "\nA=" << a;
    }
};

int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);
}