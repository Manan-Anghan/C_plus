#include<iostream>
using namespace std;

class house{
	char name;
	int rooms,h_floor;
	
	public :
		void input(){
			cout<<"enter the name of house :";
			cin>>name;
			cout<<"enter the rooms of house :";
			cin>>rooms;
			cout<<"enter the flore of house :";
			cin>>h_floor;
		}
		void output(){
			cout<<"the name of house:"<<name;
			cout<<"the rooms of house :"<<rooms;
			cout<<"the flore of house :"<<h_floor;
		}
	
};
int main()
{
	house h;
	h.input();
	h.output();
}
