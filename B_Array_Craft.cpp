#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,x,y;cin>>n>>x>>y;
    x--;y--;
    vi a(n);
    for(int i=y; i<=x; i++) a[i]=1;
    for(int i=y-1; i>=0; i--) a[i]=(a[i+1]==1)?-1:1;
    for(int i=x+1; i<n; i++) a[i]=(a[i-1]==1)?-1:1;
    cout<<a<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
0 1 2 3
    y x

*/