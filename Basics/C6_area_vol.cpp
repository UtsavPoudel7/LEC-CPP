// #include <iostream>
// using namespace std;

// class Room
// {
// public:
//     int length;
//     int breadth;
//     int height;

//     double calculateArea()
//     {
//         return length*breadth;
//     }
//     double calculateVolume()
//     {
//         return length*breadth*height;
//     }
// };

// int main()
// {
//     Room obj401;
//     obj401.length=10;
//     obj401.breadth=20;
//     obj401.height=30;

//     cout<<"The area of the room is :"<<obj401.calculateArea();
//     cout<<"The volume of the room is:"<<obj401.calculateVolume();
// }


#include <iostream>
using namespace std;

class Room
{
public:
    int length;
    int breadth;
    int height;

    void calculateArea(int a, int b)
    {
        length=a;
        breadth=b;
       cout<<"The area of the room is:"<<length*breadth;
    }
    void calculateVolume(int c,int d,int e)
    {
        length=c;
        breadth=d;
        height=e;
        cout<<"The area of the room is :"<<length*breadth*height;
    }
};

int main()
{
    Room obj401;
    obj401.calculateArea(10,20);

    obj401.calculateVolume(10,20,40);
}


//Assignment :: Write the same code but ask the value from the user.