#include <iostream>
using namespace std;
int swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int getnum()
{
    int a;
    cout << "Enter number : " << endl;
    cin >> a;
    return a;
}

int main()
{
    int a = getnum();
    int b = getnum();
    cout << "values before swap: " << a << "," << b<<endl;
    swap(a, b);
    cout << "values after swap:" << a << "," << b<<endl;
    return 0;
}
