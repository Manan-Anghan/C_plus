#include <iostream>
#include <string>

using namespace std;

class Train {
	
public:
    int t_Number;
    string t_Name,Source,t_Destination,t_Time,

    Train() {}

    Train(int t_Number, string t_Name, string Source, string t_Destination, string t_Time) {
        this->t_Number = t_Number;
        this->t_Name = t_Name;
        this->Source = Source;
        this->t_Destination = t_Destination;
        this->t_Time = t_Time;
    }

    void displayTrainDetails() {
    	cout <<"\n\n==================================================\n" ;
	    cout << "\n\t-----------------------------------------";
		cout << "\n\t|  Train number\t : "<<t_Number<<"\t\t\t|";
		cout << "\n\t|  Train name\t : "<<t_Name<<"\t\t\t|";
		cout << "\n\t|  Arriving at\t : "<<t_Time<<"\t\t\t|";
		cout << "\n\t|  Route\t : From "<<Source<<" to "<<t_Destination<<"\t|";
	    cout << "\n\t-----------------------------------------";
	    cout <<"\n\n==================================================\n" ;
    }
};

Train TRAINS[15];

void addTrain() {
    static int count = 0;
    if (count >= 15) 
	{
        cout << "Maximum number of Trains added!" << endl;
        return;
    }
    int t_Number;
    string t_Name, Source, t_Destination, t_Time;
    
	cout<<"You are adding the train details now : \n\n";
	
    cout << "\tEnter train number: ";
    cin >> t_Number;

    cout << "\tEnter train name: ";
    cin >> t_Name;

    cout << "\tEnter source: ";
    cin >> Source;

    cout << "\tEnter destination: ";
    cin >> t_Destination;

    cout << "\tEnter train time: ";
    cin >> t_Time;

	cout << "\n\tThe following train has been added successfully!";
	cout << "\n\t-----------------------------------------";
	cout << "\n\t|  Train number\t : "<<t_Number<<"\t\t\t|";
	cout << "\n\t|  Train name\t : "<<t_Name<<"\t\t\t|";
	cout << "\n\t|  Arriving at\t : "<<t_Time<<"\t\t\t|";
	cout << "\n\t|  Route\t : From "<<Source<<" to "<<t_Destination<<"\t|";
    cout << "\n\t-----------------------------------------";
    
    cout <<"\n\n==================================================\n" ;
    		
    TRAINS[count] = Train(t_Number, t_Name, Source, t_Destination, t_Time);
    count++;
}

void displayTrainByNumber() {
    int t_Number;
    int found = 0;

    cout << "Enter train number to search: ";
    cin >> t_Number;

    for (int i = 0; i < 15; i++) {
        if (TRAINS[i].t_Number == t_Number) {
            TRAINS[i].displayTrainDetails();
            found = 1;
            break;
        }
    }

    if (found==0) {
        cout << "\noops! Train not found!\n" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n1. Add train" << endl;
        cout << "2. Search train by number" << endl;
        cout << "3. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
		cout <<"\n==================================================\n" ;
        switch (choice) 
		{
        	
        case 1:
            addTrain();
            break;
            
        case 2:
            displayTrainByNumber();
            break;
            
        case 3:
            cout << "Exiting..." << endl;
            break;
            
        default:
            cout << "Invalid choice! Try again." << endl;
            break;
        }
    }
	 while (choice != 3);

    return 0;
}

