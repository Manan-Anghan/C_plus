//WAP to convert given degree celsius temperature into fahrenheit and convert that fahrenheit temperature
//into kelvin by implementing multilevel inheritance:Class P -> Class Q -> Class R
//- Class P has following members: temperature attribute in float
//- Class Q has following members: toFehrenheit() method
//- Class R has following members: toKelvin() method

#include<iostream>
using namespace std;

class P{
	public :
	float celsius;
	
		void celsius (){
			cout<<"enter the temperature in celsius :";
			cin>>celsius;
			
		}
	};
		class q :public p{
		public :
		void fahrenheit (){
			cout<<"the temperature in fahrenheit :"<<(c*9/5)+32;
		}
	};
	class r :public q{
		public :
			void kelvin :
			{
				cout<<"the temperature in kelvin : "<<(c - 32) × 5/9 + 273.15;
			}
	};
int main(){
	r a;
	a.clesius();
	a.fahrenheit();
	a.kelvin();
}
		
