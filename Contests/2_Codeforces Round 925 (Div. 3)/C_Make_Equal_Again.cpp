// https://codeforces.com/problemset/problem/1931/C
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

void solve(){
    int n,x=0,y=0;cin>>n;
    int ans=n;
    vi a(n);cin>>a;
    while(x<n and a[x]==a[0]) x++;
    while(y<n and a[n-y-1]==a[n-1]) y++;
    if(a[0]==a[n-1]) ans-=(x+y);
    else ans-=max(x,y);
    cout<<max(0,ans)<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/