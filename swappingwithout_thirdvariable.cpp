#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    a = a - b;
    b = a + b;
    a = b - a;
    cout<<"After 1st method of swapping, number is \n"<<"a="<<a<<"\n"<<"b="<<b<<"\n";
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<"After 2nd method of swapping, number is \n"<<"a="<<a<<"\n"<<"b="<<b<<"\n";
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"After 3rd method of swapping, number is \n"<<"a="<<a<<"\n"<<"b="<<b<<"\n";
}
