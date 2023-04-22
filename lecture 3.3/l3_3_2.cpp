#include<iostream>
using namespace std;

class cafe{
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		double cafe_rating;
		string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity;
	public:
		void setData()
		{
			cout << "Cafe ID : ";
			cin >> cafe_id;
			cout << "Cafe Name : ";
			cin >> cafe_name;
			cout << "Cafe Type : ";
			cin >> cafe_type;
			cout << "Cafe Rating : ";
			cin >> cafe_rating;
			cout << "Cafe Location : ";
			cin >> cafe_location;
			cout << "Cafe Establish year : ";
			cin >> cafe_establish_year;
			cout << "Cafe Staff Quantity : ";
			cin >> cafe_staff_quantity;
		}	
		void getData()
		{
			cout << endl << "Cafe Id\t\t\t : " << cafe_id << endl
						 << "Cafe Name\t\t : " << cafe_name << endl
						 << "Cafe Type\t\t : " << cafe_type << endl
						 << "Cafe Rating\t\t : " << cafe_rating << endl
						 << "Cafe Location\t\t : " << cafe_location << endl
						 << "Cafe Esta. Year\t\t : " << cafe_establish_year << endl
						 << "Cafe Staff Quantity\t : " << cafe_staff_quantity << endl;
		}
		cafe()
		{
			setData();
			getData();
		}
};

int main()
{
	cafe c;
}
