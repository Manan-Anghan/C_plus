#include<iostream>
using namespace std;

class time{
	int hour,time,minute,second;
	
	public :
		void input(){
			
			cout<<"Enter the seconds : ";
			cin>>time;
		}
		
		void output(){
			hour=time/3600;
			time=time%3600;
			minute=time/60;
			time=time%60;
			second=time;
			
			cout<<"\nseconds : "<<s<<"\nminutes : "<<m<<"\nhours : "<<h;
		}
};

int main()
{
    time t;
	t.input();
	t.output();
	
	return 0;
}

