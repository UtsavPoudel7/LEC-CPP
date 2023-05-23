#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;

    (num>40)?cout<<("passed the exam"):cout<< ("Failed the exam");
    return 0;
}