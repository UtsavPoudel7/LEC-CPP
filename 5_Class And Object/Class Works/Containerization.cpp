#include <iostream>
using namespace std;

class A
{
public:
    int data;
    void getdata()
    {
        cout << "Enter a Data" << endl;
        cin >> data;
    }
    void showdata()
    {
        cout << "The value of data is:" << data << endl;
    }
};

class B
{
public:
    A a;
    int b;
    void gatedata()
    {
        a.getdata();
        cout << "Enter the value of B:" << endl;
        cin >> b;
    }

    void showdata()
    {
        a.showdata();
        cout << "The value of b" <<b;
        cin>>b;
    }
};

int main()
{
    B b;
    b.gatedata();
    b.showdata();
    return 0;
}

