#include<iostream>
using namespace std;

class Admin{
	
	string c_name;
	int m_salary;
	string can_terminate;
	
	public :
		void input()
		{
			cout<<"Enter the name of the company : "; cin>>c_name;
			cout<<"Enter the salary of the manager : "; cin>>m_salary;
			cout<<"Enter the yes or no for termination : "; cin>>can_terminate;
		}
		void myAccess()
		{
			cout<<"\nThe name of the company : "<<c_name;
			cout<<"\nThe salary of the manager : "<<m_salary;
			cout<<"\ncan terminate? : "<<can_terminate;
		}	
};
class Manager : public Admin{
	
	int e_salary;
	int total_staff;
	
	public : 
		
		void input()
		{
			cout<<"Enter the salary of the employee : "; cin>>e_salary;
			cout<<"Enter the total staff : "; cin>>total_staff;
		}
		
		void myAccess()
		{	
			cout<<"\nThe salary of the employee : "<<e_salary;
			cout<<"\nThe the total staff : "<<total_staff;
		}
		
};

class Employee : public Manager{
	
	int total_annual_revenue ;
	
	public :
		
		void input()
		{
			cout<<"Enter the total annual revenue : "; cin>>total_annual_revenue;
		}
		
		void myAccess()
		{
			cout<<"\nTotal annual revenue : "<<total_annual_revenue;
		}
	
};

main()
{
	
	Employee e;
	e.Admin::input();
	e.Manager::input();
	e.Employee::input();
	
	e.Admin::myAccess();
	e.Manager::myAccess();
	e.Employee::myAccess();
	
}
