#include<iostream>
using namespace std;

class message{
    private:
        string A;
    public:
        void print()
        {
            cout<<"there is nothing to see for you........"<<endl;
        }
        void print(string M)
        {
            cout<<"My name is thomas shelby........"<<endl;
        }
        message(string M)
        {
            cout<<"Enter string value :"<<M<<endl;
        }
};
int main()
{
    message M("Welcome to Overloading topic in c++");
    M.print();
    M.print("Method Overloading...");
    
    return 0;
}
