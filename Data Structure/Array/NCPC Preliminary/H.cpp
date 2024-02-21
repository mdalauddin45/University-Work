#include<bits/stdc++.h>
using namespace std;

int dayNumber(int day, int month, int year) {
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

string getMonthName(int monthNumber) {
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return (months[monthNumber]);
}

int numberOfDays(int monthNumber, int year) {
    switch(monthNumber) {
        case 1:
            return (year % 400 == 0 || (year % 4 == 0 && year %100 != 0)) ? 29 : 28;
            break;
        case 0:
        case 2:
        case 4:
        case 6:
        case 7:
        case 9:
        case 11: return(31);
            break;
        
        case 3:
        case 5:
        case 8:
        case 10: return(30);
            break;
    }
}

void printCalendar(int month, int year) {
    cout << "|---------------------------|" << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << "|---------------------------|" << endl;

    int days = numberOfDays(month, year);
    int current = dayNumber(1, month, year);
    int k = 0;

    for (int i = 0; k < days; i++) {
        cout << "|";
        for (int j = 0; j < 7; j++) {
            if ((i == 0 && j < current) || k >= days) {
                cout << " - |";
            } else {
                printf("%3d|", k + 1);
                k++;
            }
        }
        cout << endl << "|---------------------------|" << endl;
    }
}

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int day, month, year;
        char dummy;
        
        cin >> day >> dummy >> month >> dummy >> year;

        printCalendar(month, year);
        cout<<endl;
    }

    return 0;
}
