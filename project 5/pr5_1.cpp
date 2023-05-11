#include<iostream>
using namespace std;

class division{
	
	float x,y,division;
	
	public :
		
		void input(){
			cout<<"Enter the value of x : "; cin>>x; 
			cout<<"Enter the value of y : "; cin>>y;		
		}
		
		void output(){
			
			try{
				if(y!=0)
				{
					division=x/y;
					cout<<"\nThe division of "<<x<<" and "<<y<<" is : "<<division<<endl;
				}
				else
				{
					throw "I hate pineapple on pizza." ;
				}
			}
			catch(...)
			{
				cout<<"\nCan not divide by zero ";
			}
		}
		
};

main()
{
						
			division d;
			d.input();
			d.output();
		
}
