#include <iostream>
using namespace std;

int main() {
    int leap_years[505];
    int index = 0;
    
    for (int year = 2020; year <= 3030; year++) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            leap_years[index] = year;
            index++;
        }
    }
    
    cout << "Leap years between 2020 and 3030:" << endl;
    for (int i = 0; i < index; i++) {
        cout << leap_years[i] << endl;
    }
    
    return 0;
}

