// https://codeforces.com/contest/577/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define n0 {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

bool dp[1001];
void solve(){
    int n,m;cin>>n>>m;
    vi a(n),b;cin>>a;
    if(n>=m) yed
    for(int i=0; i<n; i++){
        b.pb(a[i]%m);
        for(int j=0; j<m; j++) if(dp[j]) b.pb((j+a[i]%m)%m);
        for(int i:b) dp[i]=1;
        b.clear();
    }
    dp[0]?(yed):(n0);
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/