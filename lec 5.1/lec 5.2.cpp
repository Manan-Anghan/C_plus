//WAP to convert given degree celsius temperature into fahrenheit and convert that fahrenheit temperature
//into kelvin by implementing multilevel inheritance:Class P -> Class Q -> Class R
//- Class P has following members: temperature attribute in float
//- Class Q has following members: toFehrenheit() method
//- Class R has following members: toKelvin() method

#include<iostream>
using namespace std;

class P {
	
	public:
		float C,F,K;
		void celcius(){
			cout<<"enter the temperature in celsius :";
			cin>>C;
			F=(C * 9/5) + 32;
		}
};
class Q :public P{
	public :
	void fehrenheit (){
		cout<<"the tempereture in fehrenheit :"<<F<<endl;
	K=((F - 32) * 5)/9 + 273.15;
		}
}; 
class R :public Q{
	public :
	
	void kelvin (){
		cout<<"the temperature in kelvin :"<<K<<endl;
	}
};

main(){
	R a;
	a.celcius();
	a.fehrenheit();
	a.kelvin();
}
