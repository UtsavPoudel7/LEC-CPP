//Basic exmaple for class and object 

#include <iostream>
using namespace std;

class Room
{
public:
    int length;
    int breadth;
    int height;

    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }

    void Input()
    {
        cout<<"Enter the length of the room : ";
        cin>>length;

        cout<<"Enter the breadth of the room : ";
        cin>>breadth;

        cout<<"Enter the height of the room : n";
        cin>>height;
    }
};

int main()
{
    Room obj401;
    obj401.Input();

    cout <<"The area of the room is :" << obj401.calculateArea()<<endl;
    cout <<"The volume of the room is :" << obj401.calculateVolume()<<endl;

    return 0;
}