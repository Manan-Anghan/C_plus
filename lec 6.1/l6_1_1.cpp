#include<iostream>
using namespace std;

class Arith{
	public:
		void sum(int a,int b)
		{
			cout << "Divison : " << a/b << endl;
		}
		void sum(int a,int b,int c)
		{
			cout << "Substrction : " << a-b-c << endl;
		}
		void sum(int a,int b,int c,int d)
		{
			cout << "Multiplication : " << a*b*c*d << endl;
		}
		void sum(int a, int b, int c, int d, int e)
		{ 
			cout << "Addition : " << a+b+c+d+e << endl;
		}
};

int main()
{
	Arith a;
	
	a.sum(10,5);
	a.sum(20,10,5);
	a.sum(1,2,3,4);
	a.sum(10,20,30,40,50);
}
