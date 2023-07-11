#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter Number :";
        cin >> a;
    }
};

class B
{
protected:
    int b;

public:
    void getdata()
    {
        cout << "Enter no :";
        cin >> b;
    }
};

class c : public A, public B
{
public:
    void addition()
    {
        cout << "Addition" << a + b;
    }
};

int main()
{
    c aa;
    aa.input();
    aa.getdata();
    aa.addition();

    return 0;
}