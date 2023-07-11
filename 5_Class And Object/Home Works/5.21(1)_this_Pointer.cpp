#include <iostream>
using namespace std;

class test
{
private:
    int a, b;

public:
    void show()
    {
        a = 10;
        b = 20;
        cout << "obj address=" << this << endl;
        cout << "a" << this->a << endl;
        cout << "b" << this->b << endl;
    }
};

int main()
{
    test t;
    t.show();

    return 0;
}