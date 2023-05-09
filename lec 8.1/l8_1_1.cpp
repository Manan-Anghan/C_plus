//WAP to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divide by zero
//- a person cannot be able to vote if his/her age is less
//than 18
//- a password cannot be validate if it doesn’t contains
//an uppercase letter
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
				if(y!=0 || x!=0)
				{
					division=x/y;
					cout<<"\nThe division of "<<x<<" and "<<y<<" is : "<<division<<endl;
				}
				else
				{
					throw division ;
				}
			}
			catch(float division)
			{
				cout<<"\nCan not divide by zero ";
			}
		}
		
};

class vote{
	
	int age;
	
	public :
		
		void input(){
			cout<<"\nEnter the age : "; cin>>age; 
		}
		
		void output(){
			
			try{
				if(18<=age)
				{
					cout<<"\nyou can vote now, because your age is above 18........."<<endl;
				}
				else
				{
					throw age ;
				}
			}
			catch(int age)
			{
				cout<<"\nYou can not vote!"<<endl;
			}
		}
	
};

class password{
	
	string password;
	int flag=0;
	
	public :
		
		void input()
		{
			cout<<"\n\nEnter the password : "; cin>>password;
		}
		
		void check_pass()
		{
			for(int i=0 ; password[i]!=NULL ; i++)
			{
				if(password[i]>=65 && password[i]<=90)
				{
					flag++;
				}
			}
			
			try{
				if(flag>=1)
				{
					cout<<"\nThe password is valid and it contains at least one capital letter.";
				}
				else
				{
					throw flag;
				}
			}
			
			catch(int flag)
			{
				cout<<"\nThe password must contain at least one capital letter. ";
			}
		}
		
};

main()
{
	int c;
			
	cout<<"press 1 for division \n";
	cout<<"press 2 to verify age \n";
	cout<<"press 3 to verify password \n";
	cout<<"Press 1 , 2 or 3 : "; cin>>c;
	
	switch(c)
	{
		case 1 :
					
			division d1;
			d1.input();
			d1.output();
			break;
	
		case 2 :
			
			vote v1;
			v1.input();
			v1.output();
			break;
	
		case 3 :
			
			password p1;
			p1.input();
			p1.check_pass();
			break;	
	}
	
}
