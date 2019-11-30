#include<iostream>
#define m 3
using namespace std;
class queue1
{
private:
    int front1,rear;
    int a[m] ;
public:
    queue1():front1(0),rear(-1){}
    queue1(int x,int y):front1(x),rear(y){}
    void push(int);
    int pop();
    class queufull{};
    class queuempty{};
    void display()
    {
        int i;
        for(i=0;i<=rear;i++)
        {
            cout<<a[i]<<endl;
        }
    }
};
void queue1::push(int b)
{
    if(rear== m)
    {
        throw queufull();
    }
    rear++;
    a[rear]= b;
    cout<<b<<" value successfully inserted"<<endl;
}
int queue1::pop()
{
    if (rear<front1)
    {
        throw queuempty();
    }
    int c;
    c=a[front1];
    front1++;
    cout<<"the pop value is: ";
    return c;
}
int main()
{
   try{ int in,ch;
    queue1 obj;
    while(1)
    {
        cout<<"1.INSERT"<<"\n"<<"2.DELETE"<<"\n"<<"3.DISPLAY"<<"\n";
        cout<<"ENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
            case 1: cin>>in;
                    obj.push(in);
                    break;
            case 2: obj.pop();
                    break;
            case 3: obj.display();
                    break;
            default:cout<<"wrong choice"<<endl;
        }
    }
   }
        catch(queue1::queufull)
        {
            cout<<"QUEUE IS FULL"<<endl;
        }
        catch(queue1::queuempty)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
        }

return 0;

}
