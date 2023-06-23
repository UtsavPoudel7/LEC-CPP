
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

    A operator-() 
    {
        a=-a;
        b=-b;
        c=-c;
    }

    void display() 
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    A obj(-5, -6, -7);
    -obj;
    obj.display();
    return 0;
}

































// #include <iostream>
// using namespace std;

// class A
// {
// private:
//     int a, b, c;

// public:
//     A(int x, int y, int z)
//     {
//         a = x;
//         b = y;
//         c = z;
//     }
//     void operator-()
//     {
//         a = -a;
//         b = -b;
//         c = -c;
//     }
//     void display()
//     {
//         cout << a << " " << b << " " << c << endl;
//     }
// };

// int main()
// {
//     A obj(5, 6, 7);
//     -(obj).display();
//     return 0;
// }
