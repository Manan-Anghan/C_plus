#include <iostream>
#include <string>

using namespace std;

class GroceryItem {
public:
    int i_Number;
    string i_Name;
    double i_Price;
    string i_Unit;

    GroceryItem(int number, string name, double price, string unit) {
        i_Number = number;
        i_Name = name;
        i_Price = price;
        i_Unit = unit;
    }
};

int main() {

    GroceryItem a[10] = {
        
        {1, "Bread", 224.17, "unit"},
        {2, "Milk", 258.54, "gallon"},
        {3, "Bananas", 35.83, "kg"},
		{4, "Eggs", 214.05, "dozen"},
        {5, "Apples", 72.68, "kg"},
  		{6, "Cheese", 373.50, "kg"},
        {7, "Yogurt", 298.02, "liter"},
        {8, "Carrots", 72.68, "kg"},
        {9, "Tomatoes", 107.04, "kg"},
        {10, "Broccoli", 143.64, "kg"},
        
    };

    for (int i = 1; i <= 10; i++) {
        cout << "Item " << i+1 << ": " << a[i].i_Name << ", " << a[i].i_Price << " rupees per " << a[i].i_Unit << endl;
    }

	int cart[100];
	int choice=1, i=0 ; 
	float price=0;
	cout<<endl;
	while(choice!=0)
	{
		cout<<"Pick an item or press 0 : "; cin>>cart[i]; 
		choice=cart[i];
		i++; 
	}
	cout<<"\n\n\n\t\t\t\t\t======================================";
	cout<<"\n\t\t\t\t\tItems in your shopping cart : \n";
	cout<<"\t\t\t\t\t======================================\n";
	 for (int i = 0; cart[i]!=NULL ; i++) {
	 	int j=cart[i];
        cout << "\t\t\t\t\tItem " << j << ": " << a[j-1].i_Name << ", " << a[j-1].i_Price << " rupees per " << a[j-1].i_Unit << endl;
        price=price+a[j-1].i_Price;
    }	
   
	cout<<"\t\t\t\t\t======================================";
	cout<<"\n\t\t\t\t\tYour Bill is : "<<price<<" Rupees.";
	cout<<"\n\t\t\t\t\t======================================";
	cout<<"\n\t\t\t\t\tAfter 10 % discount : "<<price-price/10<<" Rupees.";
	cout<<"\n\t\t\t\t\t======================================";
			
    return 0;
}

