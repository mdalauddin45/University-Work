#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<pair<int,int> >players(22);
        for(int i=0;i<22;i++){
            cin>>players[i].first>>players[i].second;
        }
        int mxscore=0, manofthemarch=0;
        for(int i=0;i<22;i++){
            int p = players[i].first+players[i].second*20;
            if(p>mxscore){
                mxscore=p;
                manofthemarch=i+1;
            }
        }
        cout<<manofthemarch<<endl;
    }
    
    return 0;
}