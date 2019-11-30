#include<iostream>
#include<stdlib.h>
using namespace std;
class queue2
{
private:
    int top1,top2;//Declaring the top of two stack
    int a[siz],b[siz];//Declaring stack
public:
    int siz=0;
    queue2() //default constructor call
    {
        top1=-1;
        top2=-1;
    }
    void push(int);
    int pop();
    void shift();
    void display();
};
void queue2::push(int x)
{
    if(top1==siz-1)
    {
        cout<<"Queue is Full"<<"\n";
    }
    else
    {
        top1++;
        a[top1]=x;
    }
}
void queue2::shift()
{
    int x;
    x=a[top1];
    top1--;
    top2++;
    b[top2]=x;
}
int queue2::pop()
{
    int i,y;
    int temp;
    temp=top1;
    if(top1==-1&&top2==-1)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {

        if(top2==-1)
        {
            for(i=0;i<=temp;i++)
            {
                shift();
                cout<<b[top2]<<endl;
            }
            y=b[top2];
            top2--;
        }
        else
        {
            y=b[top2];
            top2--;
        }
        cout<<y<<" Value is deleted"<<endl;
        return y;
            }

}

int main()
{
    queue2 obj1;
    int a,c;
    while(1)
    {
    cout<<"1.Push\n2.Pop\n3.Quit\n"<<endl;
    cout<<"Enter the choice: ";
    cin>>a;

        switch(a)
        {
            case 1 : cout<<"Enter the value you want to push: ";
                     cin>>c;
                     obj1.push(c);
                     break;
            case 2 : obj1.pop();
                     break;
            case 3 : exit(1);
            default : cout<<"Wrong choice Try Again!"<<endl;
        }
    }
}
