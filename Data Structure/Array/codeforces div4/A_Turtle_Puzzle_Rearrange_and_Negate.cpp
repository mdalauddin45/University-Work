#include<bits/stdc++.h>
using namespace std;
 
typedef vector<int> vi;
typedef pair<int, int> p;
typedef long long ll;
 
#define w(t)            int t;cin>>t;while(t--)
#define Alauddin        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
bool isprise(ll a){
    for(lli i=2;i<=sqrt(a);i++){
        if(a%i==0) return false;
    }
    return true;
}
lli lcm(lli a, lli b){
    return a*b/__gcd(a,b);
}
lli F(lli a){
    if(a==0) return 0;
    else if(a==1) return 1;
    else return F(a-1)+F(a-2);
}
lli fact(lli a){
    lli ans=1;
    for(lli i=1;i<=a;i++) ans *= i;
    return ans;
}

lli power(lli n, lli k){
    if(k==0) return 1;
    else if(k%2==0){
        lli x=power(n,k/2);
        return x*x;
    }else{
        return n*power(n,k-1);
    }
}
lli Min_div(lli a){
    for(lli i=2;i<=sqrt(a)+1;i++){
        if(a%i==0) return i;
    }
    return a;
}
lli Num_sum(lli a){
    lli sum=0;
    for(lli i=a;i>0;i/=10) sum+=i%10;
    return sum;
}
lli BitSwap(lli a, lli b){
    lli cnt =0;
    for(lli c=a^b;c!=0;c=c>>1){
        cnt+=c&1;
    }
    return cnt;
}
string to_binary(lli a){
    string ans = "";
    for(lli i=a;i>0;i/=2){
        ans += char((i%2)+48);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
lli inv(lli a){
    if(a>0) return a*-1;
    else return abs(a);
}
ld dist(ld x1,ld y1, ld x2, ld y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main()
{
    Alauddin
    w(t){
        int n;cin>>n;
        vi v(n);
        int s=0;
        REP(i,0,n-1) {
            cin>>v[i];
            s+=abs(v[i]);
        }
        cout<<s<<endl;

    }
    return 0;
}