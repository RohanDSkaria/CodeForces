// https://codeforces.com/contest/1216/problem/C?__cf_chl_tk=7LzvFf1Kw8HP3xMjNmiwFaGWPW0fsRTqAyN7NU5h12k-1714661518-0.0.1.1-1514
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
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int ar(vi& a, vi& b){
    return (b[0]-a[0])*(b[1]-a[1]);
}
v<vi> inter(vi& a, vi& b, vi& c, vi& d){
    int lx=max(a[0],c[0]);
    int ly=max(a[1],c[1]);
    int rx=min(b[0],d[0]);
    int ry=min(b[1],d[1]);
    if(d[0]<=a[0] || c[0]>=b[0] || c[1]>=b[1] || d[1]<=a[1]) return {{0,0},{0,0}};
    return {{lx,ly},{rx,ry}};
}
void solve(){
    v<vi> a(6,vi(2));cin>>a;
    v<vi> b=inter(a[0],a[1],a[2],a[3]);
    v<vi> c=inter(a[0],a[1],a[4],a[5]);
    v<vi> d=inter(b[0],b[1],c[0],c[1]);
    (ar(a[0],a[1])>(ar(b[0],b[1])+ar(c[0],c[1])-ar(d[0],d[1])))?(yes):(no);
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/