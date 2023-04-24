#include<iostream>
    #include<string.h>
    using namespace std;

    class bill{
        private:
            string item_name;
            int quantity;
            double tax;
            int discount;
        public:
            int item_number;

            void password()
            {
                char uName[100] , pass[100] , cp[100];
                int lw=0,dot=0,dg=0,up=0,sc=0,sp=0,un=0,i,len,n,m;

                cout << "Enter Your Username : ";
                cin >> uName;

                for(i=0 ; i<strlen(uName) ; i++)
                {
                    if(uName[i]>='A' && uName[i]<='Z')
                    {
                        up++;
                    }
                    else if(uName[i]>='a' && uName[i]<='z')
                    {
                        lw++;
                    }
                    else if(uName[i]>='0' && uName[i]<='9')
                    {
                        dg++;
                    }
                    else if(uName[i]=='_')
                    {
                        un++;
                    }
                    else if(uName[i]=='.')
                    {
                        dot++;
                    }
                    else
                    {
                        sc++;
                    }
                }
                if(up>=0 && lw>=0 && dg>=0 && un==2 && dot==0 && sc==0)
                {
                    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "Valid UserName ..." << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                }	
                else
                {
                    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "Invalid UserName..." << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                }

                if(lw>0 && up>0 && dot==0 && sc==0 && strlen(pass)>=8);
                {
                    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "Confirm Username : " << uName << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << endl <<"Enter Your Password : ";
                    cin >> pass;

                    len = strlen(pass);

                    if(lw>=0 && up>=0 && dot==0 && sc==0 && strlen(pass)>=8)
                    {
                        cout << "Confirm Your Password : ";
                        cin >> cp;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        strlwr(pass);
                        strlwr(cp);

                        n = strcmp(pass,cp);

                        if(n==0)
                        {
                            cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                            cout << "You Have a Login Sucessfull.." << endl;
                            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        }
                        else
                        {
                            cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                            cout << "Your Password is Incorrect.." << endl;
                            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        }
                    }
                    else
                    {
                        cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Incorrect Password.." << endl;
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    }
                }
            }

            void setData()
            {
                cout << endl << "Enter Item Number : ";
                cin >> item_number;
                cout << "Enter Item Name : ";
                cin >> item_name;
                cout << "Enter Item Quantity : ";
                cin >> quantity;
                cout << "Enter Item Tax : ";
                cin >> tax;
                cout << "Enter Item Discount: ";
                cin >> discount;
            }	

            void getData()
            {
                cout << endl << "I_no.\t : " << item_number << endl
                            << "I_name\t : " << item_name << endl
                            << "I_Quan\t : " << quantity << endl
                            << "I_tax\t : " << tax << endl
                            << "I_dis\t : " << discount << endl ;
            }

            static void header()
            {
                cout << endl << "I_no\tI_name\tI_Quan\tI_tax\tI_dis\n======= ======= ======= ======= =======\n";
            }

            void getDataInTable()
            {
                cout << item_number << "\t" << item_name << "\t" << quantity << "\t" << tax << "\t" << discount << endl;
            }


    };

    int main()
    {

        int n,i,j;

        bill b1[50];
        b1[0].password();

        cout << endl << "Enter Number of Bill : ";
        cin >> n;

        for(int i=0 ; i<n ; i++)
        {
            b1[i].setData();
        }

        bill temp; 
        for(i=0 ; i<n ; i++)
        {
            for(j=i+1 ; j<n ; j++)
            {
                if(b1[i].item_number > b1[j].item_number)
                {
                    temp = b1[i];
                    b1[i] = b1[j];
                    b1[j] = temp;
                }
            }
        }



        bill::header();

        for(int i=0 ; i<n ; i++)
        {
            b1[i].getDataInTable();
        }

    }
