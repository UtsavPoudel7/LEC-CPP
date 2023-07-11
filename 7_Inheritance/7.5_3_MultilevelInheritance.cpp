#include <iostream>
using namespace std;

class A
{
protected:
    int roll;

public:
    void getroll()
    {
        cout << "Enter Roll";
        cin >> roll;
    }
    // void putroll()
    // {
    //     cout << "\nRoll no" << roll;
    // }
};

class B : public A
{
protected:
    int sub1, sub2;

public:
    void getmarks()
    {
        cout << "\nEnter marks of two subject";
        cin >> sub1 >> sub2;
    }
    // void putmarks()
    // {
    //     cout << "\nmarks1" << sub1
    //          << "\nmarks2" << sub2;
    // }
};

class C : public B
{

    int sportmarks;

public:
    void getsport()
    {
        cout << "\nEnter the marks";
        cin >> sportmarks;
    }
    void total()
    {
        // putroll();
        // putmarks();
        cout << "Total marks" << sub1 + sub2 + sportmarks;
    }
};

int main()
{
    C aa;
    aa.getroll();
    aa.getmarks();
    aa.getsport();
    aa.total();
    return 0;
}