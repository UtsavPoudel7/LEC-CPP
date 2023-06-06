#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

float add(float a, float b)
{
    return a + b;
}

int main()
{
    int sum1 = add(7, 0);
    int sum2 = add(2, 4, 6);
    float sum3 = add(3.5f, 1.2f);

    cout << "Sum 1: " << sum1 << endl;
    cout << "Sum 2: " << sum2 << endl;
    cout << "Sum 3: " << sum3 << endl;

    return 0;
}
