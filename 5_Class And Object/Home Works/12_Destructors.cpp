#include <iostream>
using namespace std;

int count = 0;
class demo
{
public:
    demo()
    {
        count++;
        cout << "No of object created :";
    }
    ~demo()
    {
        count--;
        cout << "\nNo of object destroyed" << count;
    }
};

int main()
{
    demo aa, bb, cc;
    {
        demo dd;
    }
    return 0;
}