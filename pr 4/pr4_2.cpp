#include<iostream>
using namespace std;

class d{
    private:
        int kilometer;
        int meter;
        int centimeter;
    public:
        void setData()
        {
            cout << "Enter Value of distance in kilometer: ";
            cin >> kilometer;
            cout << "Enter Value of distance in meter: ";
            cin >> meter; 
            cout << "Enter Value of distance in centimeter: ";
            cin >> centimeter;
        }	
        void getData()
        {
            cout << endl << "\n2kilometer\t : " << kilometer << endl
                        << "meter\t : " << meter << endl
						<< "centimeter\t " << centimeter <<endl;
        }
        d operator+(d &dist1)
        {
            d tmp;
            tmp.centimeter = centimeter + dist1.centimeter;
            tmp.meter = meter + dist1.meter + (tmp.centimeter/100);
            tmp.centimeter = tmp.centimeter%100;
            tmp.kilometer = kilometer + dist1.kilometer + (tmp.meter/1000);
            tmp.meter = tmp.meter%1000;
            return tmp;
        }
};

int main()
{
    d d1;
	d d2;
	d d3;

    d1.setData();
    d2.setData();
    
    
    d3 = d1 + d2 ;
    
    d3.getData();
    
    return 0;
}
