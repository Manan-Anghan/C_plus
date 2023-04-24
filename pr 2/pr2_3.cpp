#include <iostream>
using namespace std;

class bank
{
public:
    string name;
    string email;
    long long int ac_no;
    long long int contect_no;
    char ch;
    int type;
    int choice;
    long def = 20000;
    long dep;
    long with;
    void task1()
    {
        cout << endl << endl << "\t\t\t\t\t -: BANK MANAGEMENY SYSTEM :-" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        cout << endl << endl << "\t\t\t\t\t -: Program Designed By :-" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "\t\t\t\t\t -:     Bonika Desai   :-" << endl;

        cout << endl << endl << "\t\t\t\t\t -:        Trainer        :-" << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << "\t\t\t\t\t -:     Jaysir Gondaliya    :-" << endl;

        cout << endl << endl << "\t\t\t\t      Press Any Key And Enter To Continue... " << endl;

        cin >> ch;

        if (ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90 || ch >= 9 && ch <= 96 || ch >= 123 && ch <= 126)
        {
            system("cls");
            
            cout << "----------------------------------------------------------------------------------------------------------" << endl << endl;
            cout << "\t\t-: Press A to log in as Administrator Or S to log in as STAFF :-" << endl << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            task2();
        }
    }

    void task2()
    {
        cin >> type;

        switch(type)
        {
        case 10:
            system("cls");
            cout << endl << "----------------------------------------------------------------------------------------------------------";
            cout << endl << "\t\t\t\t -: Welcome as a ADMINISTRATOR :-" << endl;
            cout << endl << "----------------------------------------------------------------------------------------------------------";
            task3A();
            task4();
            task5();
            break;

        case 15:
            system("cls");
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << endl << "\t\t\t\t -: Welcome as a STAFF :-" << endl;
            cout << endl << "----------------------------------------------------------------------------------------------------------";
            task3S();
            task4();
            task5();
            break;

        }
    }

    void task3A()
    {
        
        cout << endl << endl << "Enter The Name Of Administrator\t : ";
        cin >> name;
        cout << "Enter The Account Number Of Administrator\t : ";
        cin >> ac_no;
        cout << "Enter The Phone Number Of Administrator\t   : ";
        cin >> contect_no;
        cout << "Enter The Email  Of Administrator\t  : ";
        cin >> email;
        cout << endl << endl;
    }

    void task3S()
    {
        
        cout << endl << endl << "\t\t\tEnter The Name Of Staff\t\t\t : ";
        cin >> name;
        cout << "\t\t\tEnter The Account Number Of Staff\t : ";
        cin >> ac_no;
        cout << "\t\t\tEnter The Phone Number Of Staff\t\t : ";
        cin >> contect_no;
        cout << "\t\t\tEnter The Email  Of Staff\t\t : ";
        cin >> email;
        cout << endl << endl;
    }

    void task4()
    {
        system("cls");
        cout << endl << endl << "----------------------------------------------------------------------------------------------------------" << endl;
        cout << "Name\t\t : " << name << endl;
        cout << "Account No\t : " << ac_no << endl;
        cout << "Phone No\t : " << contect_no << endl;
        cout << "Email\t\t : " << email << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
    }

    void task5()
    {
        cout << "\t\t\tPress [1] To Deposite Money : " << endl;
        cout << "\t\t\tPress [2] To Transfer Money : " << endl;
        cout << "\t\t\tPress [3] To Withdraw Money : " << endl;

        cin >> choice;

        switch (choice)
        {
        case 1:
            
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Deposite Value    : ";
            cin  >> dep;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Ammount is  : " << def << endl;
            cout << "\t\t\tYour Account Balance is : " << def + dep << endl;
            break;

        case 2:
            
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Transfer Value    : ";
            cin  >> with;
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Balance is  : " << def << endl;

            if (with <= 200000)
            {
                cout << "\t\t\tYour Account Balance is : "<< with - def << endl;
            }
            else
            {
                cout << "\t\t\tYou Can't Enter Money More Than Account Balance !!";
            }
            break;

        case 3:
            system("cls");
            cout << endl << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tEnter Withdraw Value    : ";
            cin  >> with;
            cout << "\n----------------------------------------------------------------------------------------------------------" << endl;
            cout << "\t\t\tYour Actual Balance is  : " << def << endl << endl;

            if (with <= 200000)
            {
                cout << "\t\t\tCongrates Your Amount has Withdraw Successfully.." << endl << endl;
                cout << "\t\t\tYour Account Balance is : " << with - def  << endl << endl;
            }
            else
            {
                cout << "\t\t\tYou Cant Enter Money More Than Account Balance !!";
            }
            break;
            
            default :
            cout << "\t\t\tPlease Enter Valid Input ";
        }
    }
};

int main()
{
    bank b1;
    b1.task1();
    b1.task2();
    b1.task3A();
    b1.task3S();
    b1.task4();
    b1.task5();
}
