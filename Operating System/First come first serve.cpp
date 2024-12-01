#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    int p[n], bt[n], wt[n], tat[n];
    double totalwt = 0, totaltt = 0;
    for (int i = 0; i < n; i++) {
        p[i] = i + 1; 
        cout << "Enter burst time for process " << p[i] << ": ";
        cin >> bt[i];
    }
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
        totalwt += wt[i]; 
    }
    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
        totaltt += tat[i];  
    }

    cout << "\nPID\tBurst\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; i++) {
        cout  << p[i] << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
    }

    cout << "\nAverage Waiting Time: " << totalwt/n << endl;
    cout << "Average Turnaround Time: " << totaltt/n << endl;

    return 0;
}
