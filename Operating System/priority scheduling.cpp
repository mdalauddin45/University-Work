#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; double totalwt = 0, totaltt = 0;
    cout << "Enter the number of processes: ";
    cin >> n;
    int p[n], bt[n], priority[n], wt[n], tat[n];
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;  
        cout << "Enter burst time for process " << p[i] << ": ";
        cin >> bt[i];
        cout << "Enter priority for process " << p[i] << ": ";
        cin >> priority[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (priority[i] < priority[j]) {
                
                int temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
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
    cout << "\np\tBurst\tPriority\tWaiting\tTurnaround\n";
    for (int i = 0; i < n; i++) {
        cout << p[i] << "\t" << bt[i] << "\t" << priority[i] << "\t\t"
             << wt[i] << "\t" << tat[i] << "\n";
    }
    cout << "Average Waiting Time: " << (double)totalwt / n << endl;
    cout << "Average Turnaround Time: " << (double)totaltt / n << endl;
    return 0;
}
