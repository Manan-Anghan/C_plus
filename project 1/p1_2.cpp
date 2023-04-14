#include<iostream>
using namespace std;

class time{
	int hour,h1,h2,minute,m1,m2,second,s1,s2;
	
	public :
		void input(){
			cout<<"Enter the first time : ";
			cout<<"\nEnter the hours : ";
			cin>>h1;
			cout<<"Enter the minutes : ";
			cin>>m1;
			cout<<"Enter the seconds : ";
			cin>>s1;
			
			cout<<"Enter the second time : ";
			cout<<"\nEnter the hours : ";
			cin>>h2;
			cout<<"Enter the minutes : ";
			cin>>m2;
			cout<<"Enter the seconds : ";
			cin>>s2;
		}
		
		void output(){
			hour=h1+h2;
			minute=m1+m2;
			second=s1+s2;
			
			while(second>=60)
			{
				second-=60;
				minute++;
			}
			while(minute>=60)
			{
				minute-=60;
				hour++;
			}
			cout<<"\nseconds : "<<second<<"\nminutes : "<<minute<<"\nhours : "<<hour;
		}
};

int main()
{
    time t;
	t.input();
	t.output();
}
