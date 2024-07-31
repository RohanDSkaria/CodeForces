// https://codeforces.com/problemset/problem/1418/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int inf=1e9+1;
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    v<array<int,2>> dp(n+1,{inf,inf});
    dp[0][1]=0;
    for(int i=0; i<n; i++)
        for(int k=0; k<2; k++)
            for(int j=1; j<=min(n-i,2); j++){
                int hard = a[i]+(j>1?a[i+1]:0);
                dp[i+j][!k]=min(dp[i+j][!k], dp[i][k]+k*hard);
            }
    cout<<min(dp[n][0], dp[n][1])<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/