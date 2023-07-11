#include<iostream>
using namespace std;

class base 
{
public:
void print(){
    cout<<"hello I am from base class";
}

};

class child:public base{
    public:
    void print(){
        cout<<"hello I am from child class";
    }
};


int main()
{
child c;
c.print();
return 0;
}