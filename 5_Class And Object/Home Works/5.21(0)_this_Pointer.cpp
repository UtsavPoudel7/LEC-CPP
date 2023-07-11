#include <iostream>
using namespace std;

class test
{
private:
    int a, b;

public:
    void show(int a, int b)
    {
        // a = a;
        // b = b;    //This will give an garbage value

        this->a = a; // Here (this->a) will say this a is of class test ko private wala a
                     // so over all CONCLUSION is that it can differentate between class a and the argument a
        this->b = b;
    }

    void display()
    {
        cout << a << endl
             << b << endl;
    }
};

//This is a keyword which is a pointer which points to the object which invokes the memeber function

int main()
{
    test t;
    t.show(10, 20);
    t.display();
    return 0;
}