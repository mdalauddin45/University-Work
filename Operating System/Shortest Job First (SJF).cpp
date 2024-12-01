#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    int pid[n], burstTime[n], waitingTime[n], turnaroundTime[n];
    for (int i = 0; i < n; i++)
    {
        pid[i] = i + 1;
        cout << "Enter burst time for process " << pid[i] << ": ";
        cin >> burstTime[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (burstTime[i] > burstTime[j])
            {

                int temp = burstTime[i];
                burstTime[i] = burstTime[j];
                burstTime[j] = temp;

                temp = pid[i];
                pid[i] = pid[j];
                pid[j] = temp;
            }
        }
    }

    int totalWaitingTime = 0, totalTurnaroundTime = 0;
    waitingTime[0] = 0;
    for (int i = 1; i < n; i++)
    {
        waitingTime[i] = waitingTime[i - 1] + burstTime[i - 1];
        totalWaitingTime += waitingTime[i];
    }

    for (int i = 0; i < n; i++)
    {
        turnaroundTime[i] = waitingTime[i] + burstTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }

    cout << "\nPID\tBurst\tWaiting\tTurnaround"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << pid[i] << "\t" << burstTime[i] << "\t"
             << waitingTime[i] << "\t" << turnaroundTime[i] << endl;
    }
    
    cout << "\nAverage Waiting Time: " << (double)totalWaitingTime / n <<endl;
    cout << "Average Turnaround Time: " << (double)totalTurnaroundTime / n << endl;

    return 0;
}