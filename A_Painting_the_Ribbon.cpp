// https://codeforces.com/contest/1954/problem/A
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
    int n,m,k;cin>>n>>m>>k;
    (n-k<=((n/m+((n%m)?1:0))))?cout<<"NO"<<endl:cout<<"YES"<<endl;;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/