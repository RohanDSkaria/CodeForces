// https://codeforces.com/problemset/problem/1183/D
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    vi a(n+1);
    for(int i=0; i<n; i++){
        int x;cin>>x;
        a[x]++;
    }
    sort(rall(a));
    int ans=a[0],p=a[0];
    // deb(a)
    for(int i=1; i<=n; i++){
        if(p==0) break;
        (a[i]>=p)?p--:p=a[i];
        ans+=p;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
4 3 2 0 0 0 0 0

*/