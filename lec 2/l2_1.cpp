#include<iostream>
using namespace std;

class employee {
	char name[20],role[20],city[20],cmp_name[20];
	int age,experience,salary,id,i;
	
	public :
		 void input(){
		 	for(i=1;i<=5;i++)
		 	{
		 		cout<<"\n";
		 		cout<<"enter the name of employee :";
		 		cin>>name;
		 		cout<<"enter the role of employee :";
		 		cin>>role;
		 		cout<<"enter the city of employee :";
		 		cin>>city;
		 		cout<<"enter the cmp_name of employee :";
		 		cin>>cmp_name;
		 		cout<<"enter the age of employee :";
		 		cin>>age;
		 		cout<<"enter the salary of employee :";
		 		cin>>salary;
		 		cout<<"enter the id of employee :";
		 		cin>>id;
		 		cout<<"enter the experience of employee :";
		 		cin>>experience;
			 }
			 }
			 void output(){
			 	for(i=1;i<=5;i++)
		 	{
		 		cout<<"\n*************************\n";
		 		cout<<" the name of employee :"<<name<<"\n";
		 		
		 		cout<<" the role of employee :"<<role<<"\n";
		 		
		 		cout<<" the city of employee :"<<city<<"\n";
		 		
		 		cout<<" the cmp_name of employee :"<<cmp_name<<"\n";
		 		
		 		cout<<" the age of employee :"<<age<<"\n";
		 	
		 		cout<<" the salary of employee :"<<salary<<"\n";
		 	
			 	cout<<" the id of employee :"<<id<<"\n";
		 		
		 		cout<<" the experience of employee :"<<experience<<"\n";
		 		
			 }
			 	
			 }
		 
		 
}; 
main()
{
	employee e;
	e.input();
	e.output();
}
