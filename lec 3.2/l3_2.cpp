#include<iostream>
using namespace std;

class hotel {

	int id,e_year,s_quantity,r_quantity;
	string name,city;
	
	static string rating;
	
	public :
		void setter (){
			cout<<"\n\nenter the name of hotel :";
			cin>>name;
			cout<<"enter the city of hotel :";
			cin>>city;
			cout<<"enter the id of hotel :";
			cin>>id;
			cout<<"enter the r_quantity of hotel :";
			cin>>r_quantity;
			cout<<"enter the e_year of hotel :";
			cin>>e_year;
			cout<<"enter the s_quantity of hotel :";
			cin>>s_quantity;
			
		}
		
		void gets(){
			cout<<"the rating of hotel is :"<<rating;
		}
		
		void getter(){
			cout<<"\nenter the name of hotel :"<<name<<endl;
			cout<<"enter the city of hotel :"<<city<<endl;
			cout<<"enter the id of hotel :"<<id<<endl;
			cout<<"enter the r_quantity of hotel :"<<r_quantity<<endl;
			cout<<"enter the e_year of hotel :"<<e_year<<endl;
			cout<<"enter the s_quantity of hotel :"<<s_quantity<<endl;
		}
};

string hotel::rating="5 star";
int main(){
	int n,i;
	cout<<"enter the number of hotels :";
	cin>>n;
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setter();
		h[i].getter();
		h[i].gets();
		}
	return 0;
}
