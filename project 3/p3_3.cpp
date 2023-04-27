#include<iostream>
using namespace std;

class animal{
    protected:
        int age;
        string name;
    public:
        void setData()
        {
            cout << "Enter the Age : ";
            cin >> age;
            cout << "Enter the Name : ";
            cin >> name;
        }		
};

class zebra : public animal{
    public:
        void getDataZ(){
            cout << endl << "Zebra Age\t : " << age << endl
                        << "Dolphin Name\t : " << name << endl;
        }
};

class dolphin : public animal{
    public:
        void getDataD(){
            cout << endl << "Dolphin Age\t : " << age << endl
                        << "Dolphin Name\t : " << name << endl;
        }
};

int main(){
    zebra z;
    dolphin d;
    
    z.setData();
    d.setData();
    
    z.getDataZ();
    d.getDataD();
}
