#include<iostream>
using namespace std;

class student{
	string name,email,city,college,course;
	int id,age,n,i;


	public :
	void setter(string name,string email,string city,string college,string course,int id,int age){
		this->age=age;
		this->city=city;
		this->college=college;
		this->course=course;
		this->email=email;
		this->id=id;
		this->name=name;
	} 
	void getter (){
		
		
		cout<<"the name of student : "<<name<<endl;
		cout<<"the email of student : "<<email<<endl;
		cout<<"the city of student : "<<city<<endl;
		cout<<"the college of student : "<<college<<endl;
		cout<<"the course of student : "<<course<<endl;
		cout<<"the id of student  : "<<id<<endl;
		cout<<"the age of student : "<<age<<endl;
		
	}
};
int main(){
	int age,id,n,i;
	string name,course,email,city,college;
	
	cout<<"enter the numbers of students :";
	cin>>n;
	student s;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"\nenter the name of student :";
		cin>>name;
		cout<<"enter the email of student:";
		cin>>email;
		cout<<"enter the city of student :";
		cin>>city;
		cout<<"enter the college of student :";
		cin>>college;
		cout<<"enter the course of student :";
		cin>>course;
		cout<<"enter the id of student :";
		cin>>id;
		cout<<"enter the age of student :";
		cin>>age;
		s.setter(name,email,city,college,course,id,age);
		cout<<endl;	
		s.getter();
		cout<<endl;
	}
	
	
	
}
	
	
