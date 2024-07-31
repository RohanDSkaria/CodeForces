// https://codeforces.com/contest/431/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int m=1e9+7;
v<vi> dp;
void solve(){
    int n,k,d;cin>>n>>k>>d;
    dp.assign(101, vi(2,0LL));
    dp[0][0]=1;dp[0][1]=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(i<j) break;
            if(j<d){
                dp[i][0] = (dp[i][0]+dp[i-j][0])%m;
                dp[i][1] = (dp[i][1]+dp[i-j][1])%m;
            }
            else dp[i][1] = (dp[i][1]+dp[i-j][0]+dp[i-j][1])%m;
        }
    }
    cout<<dp[n][1]<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/