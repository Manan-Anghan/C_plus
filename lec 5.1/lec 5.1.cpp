//WAP to find sum of all three number’s cubes by implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in integer data type
//- Class Y has following members: setData() and getData() methods

#include<iostream>
using namespace std;

class X{
	int a,b,c,A,B,C;
		public :
	void setdata() {

		
		cout<<"enter the value of a :";
		cin>>a;
		cout<<"enter the value of b :";
		cin>>b;
		cout<<"enter the value of c :";
		cin>>c;
		A=a*a*a;
		B=b*b*b;
		C=c*c*c;
		}
	void getdata() {
		cout<<"the cube of a is :"<<A<<endl;
		cout<<"the cube of b is :"<<B<<endl;
		cout<<"the cube of c is :"<<C<<endl;
		cout<<"the sum of A,B and C is :"<<A+B+C<<endl;
		
	}
		
};
class Y :public X{
	
};
main(){

   Y p;
   p.setdata();
   p.getdata();
}
