#include<iostream>
using namespace std;

class number{
	protected:
		int a;
	public:
		void setData(){
			cout << "Enter the value : ";
			cin >> a;
		}	
};

class square : public number{
		int b;
	public:
		void getsquare(){
			b = a * a;
			cout << "Square is : " << b << endl;
		}
};

class cube : public number{
		int c;
	public:
		void getcube(){
			c = a * a * a;
			cout << "Cube is : " << c << endl;
		}
};

int main()
{
	square s;
	cube c;

	s.setData();
	s.getsquare();
	
	c.setData();
	c.getcube();	
}
