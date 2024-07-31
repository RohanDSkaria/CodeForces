// https://codeforces.com/contest/1965/problem/B
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
#define deb(x) cout<<#x<<" = "<<x<<endl
#define pii pair<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,k;cin>>n>>k;
    int b=k-1;
    vi a;
    // deb(k);
    for(int i=1; i<=b; i*=2) a.pb(i),b-=i;
    // cout<<a<<endl;
    // deb(b);
    // deb(a);
    if(b>0) a.pb(b);
    if(k==1) a.pb(3);
    for(int i=k+1; i<=n; i*=2) a.pb(i);
    a.pb(2*k+1);
    // deb(a);
    cout<<a.size()<<endl<<a<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/