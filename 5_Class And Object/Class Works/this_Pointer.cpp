#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void getnum(int x)
    {

        // x = x;
        this -> x = x; //  ->Member access pointer
    }
    void shownum()
    {
        cout << x;
    }
};

int main()
{
    A obj1;
    obj1.getnum(10);
    obj1.shownum();
    return 0;
}

