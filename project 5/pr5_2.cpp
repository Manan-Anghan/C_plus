#include<iostream>
using namespace std;

class Ambiguity{
	public :
		virtual void input()=0;
		virtual int getValue()=0;
};

class X : public Ambiguity{
	public :
		int x ;
		void input() {
			cout<<"Enter the value of x : "; 
			cin>>x;
		}
		int getValue() {
			return x;
		}
};

class Y : public Ambiguity {
	public :
		int y ;
		void input() {
			cout<<"Enter the value of y : "; 
			cin>>y;
		}
		int getValue() {
			return y;
		}
};

class Z : public Ambiguity {
	public :
		int z ;
		void input() {
			cout<<"Enter the value of z: "; 
			cin>>z;
		}
		int getValue() {
			return z;
		}
};

class Output : public X , public Y , public Z {
	public :
		Output(Ambiguity* A1, Ambiguity* A2, Ambiguity* A3) {
			X::x = A1->getValue();
			Y::y = A2->getValue();
			Z::z = A3->getValue();
		}
		void sum() {
			cout<<"The sum of x,y and z is : "<<X::x+Y::y+Z::z;
		}
};

int main() {
	Ambiguity *A1 = new X();
	A1->input();
	
	Ambiguity *A2 = new Y();
	A2->input();
	
	Ambiguity *A3 = new Z();
	A3->input();
	
	Output O(A1, A2, A3);
	O.sum(); 
	
}
