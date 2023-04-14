#include<iostream>
using namespace std;

class distance{
	int inch,i1,i2,feet,f1,f2;
	
	public :
		void input(){
			cout<<"Enter the first distance : ";
			cout<<"\nEnter the inch : ";
			cin>>i1;
			cout<<"Enter the feet : ";
			cin>>f1;
			cout<<"Enter the second distance : ";
			cout<<"\nEnter the inch : ";
			cin>>i2;
			cout<<"Enter the feet : ";
			cin>>f2;
		}
		void output(){
			inch=i1+i2;
			feet=f1+f2;
			
			while(inch>=12)
			{
				inch-=12;
				feet++;
			}
			cout<<"inch : "<<inch<<"\nfeet : "<<feet;
		}
};

main()
{
	distance d;
	d.input();
	d.output();
}

