#include<iostream>
using namespace std;

class detail{
	
    	int a;
	public:
		int b;
	public :
		void input(){
			
			cout<<"Enter the a : ";
			cin>>a;
			cout<<"Enter the b : ";
			cin>>b;
		}
		
		void output(){
			cout<<"\nThe value of a is  : "<<a;	
		}
		void output2(detail );
};
void output2(detail d){
	cout<<"\nThe value of b is : "<<d.b;
}

int main()
{
    detail d;
	d.input();
	d.output();
	output2(d);
	
	
}

