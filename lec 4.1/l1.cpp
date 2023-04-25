//WAP to find sum of all three number’s cubes by implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in integer data type
//- Class Y has following members: setData() and getData() methods


#include<iostream>
using namespace std;

class X{
	int p,q,r,P,Q,R;
	public :
		void setdata (){	
	cout<<"enter the value of p :";
	cin>>p;
	cout<<"enter the value of q :";
	cin>>q;
	cout<<"enter the value of r :";
	cin>>r;
	}
	void getdata (){
		cout<<"P : "<<"p*p*p"<<endl
			<<"Q : "<<"q*q*q"<<endl
			<<"R : "<<"r*r*r"<<endl;
		cout<<"the sum of P,Q and R is :"<<P+Q+R;
	}
};
class Y : public X
{
	
};
int main(){
	Y a;
	a.setdata();
	a.getdata();
	return 0;
	
}
