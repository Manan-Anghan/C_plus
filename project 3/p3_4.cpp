#include<iostream>
using namespace std;

class employee1{
    private:
        int e_id;
        string e_name;
        string e_role;
    public:
        void setData1(){
            cout << "Enter Employee Id : ";
            cin >> e_id;
            cout << "Enter Employee Name : ";
            cin >> e_name;
            cout << "Enter Employee Role : ";
            cin >> e_role;
        }	
        void getData1()
        {
            cout << endl << "Employee id\t : " << e_id << endl
                        << "Employee Name\t : " << e_name << endl
                        << "Employee Role\t : " << e_role << endl; 
        }
};

class employee2{
    private:
        int e_age;
        int e_salary;
        double e_exp;
    public:
        void setData2(){
            cout << "Enter Employee Age : ";
            cin >> e_age;
            cout << "Enter Employee Salary : ";
            cin >> e_salary;
            cout << "Enter Employee Experience : ";
            cin >> e_exp;
        }	
        void getData2()
        {
            cout << endl << "Employee Age\t : " << e_age << endl
                        << "Employee Salary\t : " << e_salary << endl
                        << "Employee Exp\t : " << e_exp << endl; 
        }
};

class employee3 : public employee1 , public employee2{
    private:
        string compny_name;
    public:
        void setData3(){
            cout << "Enter Company Name : ";
            cin >> compny_name;
        }
        void getData3(){
            cout << endl << "Company Name\t : " << compny_name << endl;
        }	
};

int main()
{
    employee3 e;
    
    e.setData1();
    e.setData2();
    e.setData3();
    
    e.getData1();
    e.getData2();
    e.getData3();
}

