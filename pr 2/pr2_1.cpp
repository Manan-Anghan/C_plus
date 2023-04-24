class railWay{
    private:
        int Train_Number;
        string Train_Name;
        string Source;
        string Destination;
        int Train_Time;
    public:
        void setData()
        {
            cout << "Enter Train Number : ";
            cin >> Train_Number;
            cout << "Enter Train Name : ";
            cin >> Train_Name;
            cout << "Enter Train Source : ";
            cin >> Source;
            cout << "Enter Train Destination : ";
            cin >> Destination;
            cout << "Enter Train Time : ";
            cin >> Train_Time;
        }
        
        void getData()
        {
            cout << endl << "T_Number\t : " << Train_Number << endl
                        << "T_Name\t : " << Train_Name << endl
                        << "T_Source\t : " << Source << endl
                        << "T_Destination\t : " << Destination << endl
                        << "T_Time\t : " << Train_Time << endl;
        }
            
        void display()
        {
            if(Train_Number<=1000 || Train_Number<=2000 || Train_Number<=3000)
            {
                cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << Train_Name << " train is available... " << endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            }
            else
            {
                cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                cout << Train_Name << " train is Come in " << 12-Train_Time<< " o'clock at platform..." << endl;
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
            cout << Train_Number << "\t" << Train_Name << "\t" << Source << "\t" << Destination << "\t" << Train_Time << endl;
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
