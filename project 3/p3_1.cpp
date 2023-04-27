#include<iostream>
using namespace std;

class shape{
	public:
		double width,height;
		shape()
		{
			cout<<"Enter Width : ";
			cin>>width;
			cout<<"Enter Height : ";
			cin>>height;	
		}
};

class rectangle : public shape{
	public:
		void area()
		{
			cout<<"Area of Ractangle is : "<<width*height<<endl;
		}
};

class triangle : public shape{
	public:
		void area()
		{
			cout<<"Area of Triangle is : "<<0.5*width*height<<endl;
		}
};

int main(){
	rectangle R1;
	R1.area();
	
	triangle T1;
	T1.area();
}
