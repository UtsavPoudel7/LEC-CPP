#include <iostream>
using namespace std;

void display()
{
    static int i = 1;  //Initialization happens only one time in the code when you use static variable
    //static varible = class variable
    i += 5;
    cout << i;
}

int main()
{
    display();
    display();
}
