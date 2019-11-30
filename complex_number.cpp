#include<iostream>
using namespace std;
class complex1 {
	private:
		int img,real;
	public:
		void setdata(int real,int img) {

			this->real=real;
			this->img=img;
		}
		friend ostream& operator<<(ostream&,complex1);
		friend istream& operator>>(istream&,complex1&);
		complex1 operator +(complex1 c) {
			complex1 temp;
			temp.real=real+c.real;
			temp.img=img+c.img;
			return (temp);
		}
};
ostream& operator <<(ostream &dout,complex1 C1) {
	cout<<"a="<<C1.real<<" b="<<C1.img<<endl;
	return (dout);
}
istream& operator>>(istream &din,complex1 &C1) {
	cin>>C1.real>>C1.img;
	return (din);
}
int main() {
	complex1 c2,c3,c4;
	cout<<"Enter the 1st number : \n";
	cin>>c2;
	cout<<"Enter the 2nd number : \n";
	cin>>c3;
	c4=c2+c3;
	cout<<" "<<c2<<" "<<c3;
	cout<<endl<<endl<<c4;
	return 0;
}
