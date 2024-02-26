#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int main()
{
    Alauddin
    w(t){
        int n;
        cin>>n;
        vi v(n);
        REP(i,0,n-1)cin>>v[i];
        //this loop will not return sequentially
        // for(int l=0;l<n;l++){
        //     for(int r=l;r<n;r++){
        //         cout<<"[";
        //         for(int i=l;i<=r;i++){
        //             cout<<v[i];
        //             if(i!=r) cout<<",";
        //         }
        //         cout<<"]";
        //     }
        // }
        // this loop will retrun sequentially
        // for(int l=1;l<=n;l++){
        //     for(int s=0;s<=n-l;s++){
        //         int e=s+l-1;
        //         cout<<"[";
        //         for(int i=s;i<=e;i++){
        //             cout<<v[i];
        //             if(i!=e) cout<<",";
        //         }
        //         cout<<"]";
        //     }
        // }
        if(n%2==0){
            for(int l=1;l<=n;l++){
                for(int s=0;s<=n-l;s++){
                    int e=s+l-1;
                    int maxval=v[s];
                    for(int i=s;i<=e;i++){
                        maxval=max(maxval,v[i]);
                    }
                    cout<<maxval<<" ";
                }
            }
        }else{
            for(int l=0;l<n;l++){
                for(int r=l;r<n;r++){
                    int maxval=v[l];
                    for(int i=l;i<=r;i++){
                        maxval=max(maxval,v[i]);
                    }
                    cout<<maxval<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}