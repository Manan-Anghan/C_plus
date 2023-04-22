#include<iostream>
using namespace std;

class comp{
	private:
		int comp_id;
		string comp_name;
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
	public:
		comp(
			int comp_id,
			string comp_name,
			int comp_staff_quantity,
			int comp_revenue,
			int comp_import_raw_diamonds,
			int comp_export_diamonds,
			string comp_ceo )
		{
			this->comp_id = comp_id;
			this->comp_name = comp_name;
			this->comp_staff_quantity = comp_staff_quantity;
			this->comp_revenue = comp_revenue;
			this->comp_import_raw_diamonds = comp_import_raw_diamonds;
			this->comp_export_diamonds = comp_export_diamonds;
			this->comp_ceo = comp_ceo;
			
			cout << endl << "Company Id\t\t\t : " << comp_id << endl
						 << "Company Name\t\t\t : " << comp_name << endl
						 << "Company staff quantity\t\t : " << comp_staff_quantity << endl
						 << "Company Revenue\t\t\t : " << comp_revenue << endl
						 << "Company Import Diamonds\t\t : " << comp_import_raw_diamonds << endl
						 << "Company Export Diamonds\t\t : " << comp_export_diamonds << endl
						 << "Company CEO Name\t\t : " << comp_ceo << endl;			 
		}
	comp(comp &c1);			
};

int main()
{
	comp c1(1663,"Harishrishna",5000,100,50,25,"Govindbhai Dholakiya");
}
