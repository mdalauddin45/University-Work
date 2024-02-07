#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int>& a, int n) 
{ 
  for (int i = 0; i < n; i++) { 
    cout << a[i] << " "; 
  } 
  cout << endl; 
} 

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        // Create and display the permutation P
        vector<int> p;
        for (int i = 0; i < n; i++) {
            p.push_back(arr[i]);
            p.push_back(arr[n + i]);
        }
        sort(arr.begin(), arr.end());
        display(p, 2 * n);
    }

    return 0;
}
