// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define v vector
#define vi v<int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m,p1=0,p2=0;cin>>n>>m;
    vi a(n),b(m);cin>>a>>b;
    while(p1<n || p2<m) cout<<((p2==m || (p1<n && a[p1]<=b[p2]))?a[p1++]:b[p2++])<<" ";
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}