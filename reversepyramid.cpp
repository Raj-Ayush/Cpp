#include<iostream>
using namespace std;
int main()
{
    int i ,j;
    for(i=5;i>0;i--)
    {
        for(j=5-i;j>0;j--)
        {
            cout<<" ";
        }
        for(j=2*i-1;j>0;j--)
        {
            cout<<"*";
        }

        cout<<"\n";
    }
}
