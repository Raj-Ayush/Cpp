#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class series
{
private:
    int x,n;
public:
    series()  //default constructor
    {
        x=0,n=0;
    }
    series (int a,int b) //argument constructor
    {
        x=a;
        n=b;
    }
    void getvalue()
    {

        cout<<"Enter the value of x and n"<<endl;
        cin>>x>>n;
        cout<<"x="<<x<<" "<<"n="<<n<<endl;
    }
    void make_series()
    {
        int i ;
        int sum=0;
        for(i=0;i<=n;i++)
        {
            sum=sum + pow(x,i);
        }
        cout<<"1+ x^2 + x^3 + x^4 + ........+ x^n"<<endl;
        cout<<"sum="<<sum<<"\n\n\n";
    }
    ~series(){
    cout<<"END";}

};
int main()
{
    series obj,obj1;
    obj=obj1;
    obj.getvalue();
    obj.make_series();
    return 0;
}
