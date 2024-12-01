#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    int p[n], bt[n], wt[n], tat[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
        cout << "Enter burst time for process " << p[i] << ": ";
        cin >> bt[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (bt[i] > bt[j])
            {

                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    int totalwt = 0, totaltat = 0;
    wt[0] = 0;
    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
        totalwt += wt[i];
    }

    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
        totaltat += tat[i];
    }

    cout << "\np\tBurst\tWaiting\tTurnaround"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << "\t" << bt[i] << "\t"
             << wt[i] << "\t" << tat[i] << endl;
    }
    
    cout << "\nAverage Waiting Time: " << (double)totalwt / n <<endl;
    cout << "Average Turnaround Time: " << (double)totaltat / n << endl;

    return 0;
}