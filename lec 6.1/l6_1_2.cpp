#include<iostream>
using namespace std;

class Cricket{
    protected:
        int Over;
};

class T20match : public Cricket{
    public:
        void getOver()
        {
            cout << "In this Match you will Get 20 Overs..\n";
        }
};

class Testmatch : public T20match{
    public:
        void getOver()
        {
            cout << "In this Match you will Get 90 Overs..\n";
        }
};

int main(){
    Testmatch t;
    
    t.T20match::getOver();
    t.Testmatch::getOver();
}
