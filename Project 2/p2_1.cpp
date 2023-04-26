#include<iostream>
using namespace std;
class railWay{
    private:
        int T_Number,T_Time;
        string T_Name,T_Source,T_Destination;
    public:
        void setData()
        {
            cout << "Enter Train Number : ";
            cin >> T_Number;
            cout << "Enter Train Name : ";
            cin >> T_Name;
            cout << "Enter Train Source : ";
            cin >> T_Source;
            cout << "Enter Train Destination : ";
            cin >> T_Destination;
            cout << "Enter Train Time : ";
            cin >> T_Time;
        }
        
        void getData()
        {
            cout << endl << "T_Number\t : " << T_Number << endl
                        << "T_Name\t : " << T_Name << endl
                        << "T_Source\t : " << T_Source << endl
                        << "T_Destination\t : " << T_Destination << endl
                        << "T_Time\t : " << T_Time << endl;
        }
            
        void display()
        {
            if(T_Number<=1000 || T_Number<=2000 || T_Number<=3000)
            {
                cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << T_Name << " train is available... " << endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            }
            else
            {
                cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << T_Name << " train is Come in " << 12-T_Time<< " o'clock at platform..." << endl;
                cout <<  "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            }
        }	
        static void header()
        {
            system("cls");
            cout << "T_No.\tT_Name\tT_Sour\tT_Desti\tT_Time\n======= ======= ======= ======= =======\n";
        }
        
        void getDataInTable()
        {
            cout << T_Number << "\t" << T_Name << "\t" << T_Source << "\t" << T_Destination << "\t" << T_Time << endl;
        }
};

int main()
{
    railWay r1,r2,r3;
    
    r1.setData();
    r2.setData();
    r3.setData();
    
    railWay::header();
    
    r1.getDataInTable();
    r2.getDataInTable();
    r3.getDataInTable();
    
    r1.display();
    r2.display();
    r3.display();
}
