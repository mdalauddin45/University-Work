
#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    w(t){
        int n, q;
	    cin >> n >> q;
	    long long total_sum = 0;
	    int stones[n];
	    vector<int> freq(1000007, 0);
	    for(int i = 0; i < n; i++){
	        cin >> stones[i];
	        freq[stones[i]]++;
	        total_sum += stones[i];
	    }
	    sort(stones, stones + n);
	    long long min_sum_pair_a = stones[0];
	    long long min_sum_pair_b = stones[1];
	    long long max_possible_sum = 1LL * 2 * total_sum - (min_sum_pair_a + min_sum_pair_b);
	    while(q--){
	        int x;
	        cin >> x;
	        if(x > max_possible_sum){
	            cout << -1 << endl;
	        } else if(x == max_possible_sum){
	            for(int i = 1; i < n; i++){
	                cout << stones[i] << " ";
	            }
	            cout << stones[0] << endl;
	        } else{
	            bool found = false;
	            long long sum_times_two = 2 * total_sum;
	            for(int i = 0; i < n && !found; i++){
	                long long target = sum_times_two - x;
	                for(int j = 0; j < n; j++){
	                    if(j == i) continue;
	                    if((stones[i] + stones[j]) == target){
	                        min_sum_pair_a = stones[i];
	                        min_sum_pair_b = stones[j];
	                        found = true;
	                    }
	                }
	            }
	            if(!found){
	                cout << -1 << endl;
	            } else{
	                bool first_occurrence = false, second_occurrence = false;
	                cout << min_sum_pair_a << " ";
	                for(int i = 0; i < n; i++){
	                    if(stones[i] == min_sum_pair_a){
	                        if(first_occurrence){
	                            cout << stones[i] << " ";
	                        } else{
	                            first_occurrence = true;
	                        }
	                    } else if(stones[i] == min_sum_pair_b){
	                        if(second_occurrence){
	                            cout << stones[i] << " ";
	                        } else{
	                            second_occurrence = true;
	                        }
	                    } else{
	                        cout << stones[i] << " ";
	                    }
	                }
	                cout << min_sum_pair_b << endl;
	            }
	        }
	    }
	}
    return 0;
}