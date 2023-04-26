#include<iostream>
using namespace std;

class A{
	int RBI;
	public :
		void ROI(){
			cout<<"the intrest rate of RBI is 9%"<<endl;
		}
};
class B :public A{
	int SBI;
	public :
		void getROI(){
			cout<<"the intrest rate of SBI is 10%"<<endl;
		}
};
class C :public A{

	int BOB;
	public :
		void getROI(){
			cout<<"the intrest rate of BOB is 11%"<<endl;
		}
};
class D :public A{
	int ICICI;
	public :
		void getROI(){
			cout<<"the intrest rate of ICICI is 2%"<<endl;
		}
};
main()
{
	B b1;
	C c1;
	D d1;
	b1.ROI();
	b1.getROI();
	c1.getROI();
	d1.getROI();
};
