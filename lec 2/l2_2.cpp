#include<iostream>
using namespace std;

class car {
	char color[10],model[20],cmp_name[20];
	int r_year,id,i;
	
	public :
		 void input(){
		 	for(i=1;i<=5;i++)
		 	{
		 		cout<<"\n";
		 		cout<<"enter the model of car :";
		 		cin>>model;
		 		cout<<"enter the color of car :";
		 		cin>>color;
		 		cout<<"enter the cmp_name of car :";
		 		cin>>cmp_name;
		 		cout<<"enter the r_year of car :";
		 		cin>>r_year;
		 		cout<<"enter the id of car :";
		 		cin>>id;
			 }
			 }
			 void output(){
			 	for(i=1;i<=5;i++)
		 	{
		 		cout<<"\n*************************\n";
		 		cout<<" the model of car :"<<model<<"\n";
		 		
		 		cout<<" the color of car :"<<color<<"\n";
		 		
		 		cout<<" the cmp_name of name :"<<cmp_name<<"\n";
		 		
		 		cout<<" the r_year of employee :"<<r_year<<"\n";
		 	
		 		cout<<" the id of employee :"<<id<<"\n";
		 		
		 			 		
			 }
			 	
			 }
		 
		 
}; 
main()
{
	car c;
	c.input();
	c.output();
}
