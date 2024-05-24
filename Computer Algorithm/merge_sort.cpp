#include<bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int> a) {

   if (a.size() <= 1) { 
      return a; 
   }

   vector<int> b;
   vector<int> c;

   int mid = a.size() / 2;

   for (int i = 0; i < mid; ++i) {
      b.push_back(a[i]);
   }
   for (int i = mid; i < a.size(); ++i) {
      c.push_back(a[i]);
   }

   vector<int> sorted_b = mergeSort(b);
   vector<int> sorted_c = mergeSort(c);

   int idx1 = 0, idx2 = 0;
   vector<int> ans;

   for (int i = 0; i < a.size(); ++i) {

      if (idx1 == sorted_b.size()) {
         ans.push_back(sorted_c[idx2]);
         idx2++;
      } else if(idx2 == sorted_c.size()) {
         ans.push_back(sorted_b[idx1]);
         idx1++;
      } else if (sorted_b[idx1] > sorted_c[idx2]) {
         ans.push_back(sorted_c[idx2]);
         idx2++;
      } else {
         ans.push_back(sorted_b[idx1]);
         idx1++;
      }
   }

   for (auto i : ans) {
      cout << i << " ";
   }
   cout << endl;

   return ans;
}

int main() {

    int n; cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> ans = mergeSort(a);

    for (auto i : ans) {
      cout << i <<  " ";
    }
    cout << endl;
    return 0;
}