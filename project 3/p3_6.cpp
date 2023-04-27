#include<iostream>
using namespace std;

class EmployeeA{
    protected:
        int id;
        string name;
        string role;
        int salary;
        double exp;
        string comp_name;
        string address;
        string email;
        long long int contect;
    public:
        void setDataA(){
            cout << "Enter Employee Id : ";
            cin >> id;
            cout << "Enter Employee Name : ";
            cin >> name;
            cout << "Enter Employee Role : ";
            cin >> role;
        }	
};

class EmployeeB : public EmployeeA{
    public:
        void setDataB(){
            //salary,experience
            cout << "Enter Employee Salary : ";
            cin >> salary;
            cout << "Enter Employee Experience : ";
            cin >> exp;
        }
};

class EmployeeC : public EmployeeB {
    public:
        void setDataC(){
            //comp_name,address
            cout << "Enter Comapny Name : ";
            cin >> comp_name;
            cout << "Enter Employee Address : ";
            cin >> address;
            cout << "Enter Employee Email : ";
            cin >> email;
            cout << "Enter Employee Contect : ";
            cin >> contect;
        }
        void getDataC(){
            //name,role,salary
            cout << endl << "Employee Id\t : " << id << endl
                        << "Employee Name\t : " << name << endl
                        << "Employee Role\t : " << role << endl
                        << "Employee Salary\t : " << salary << endl
                        << "Employee Exp\t : " << exp << endl
                        << "Company Name\t : " << comp_name << endl
                        << "Employee Address\t : " << address << endl
                        << "Employee Email\t : " << email << endl
                        << "Employee Contect\t : " << contect << endl;
        }
};



int main()
{
    EmployeeC e;
    
    e.setDataA();
    e.EmployeeB::setDataB();
    e.EmployeeC::setDataC();
    
    
    e.getDataC();
}

