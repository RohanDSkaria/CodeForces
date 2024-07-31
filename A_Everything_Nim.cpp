// https://codeforces.com/contest/1965/problem/A
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
#define p pair
#define pii p<int,int>
#define yes {cout<<"Alice"<<endl;return;}
#define no {cout<<"Bob"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    set<int> cet;cet.insert(all(a));
    (cet.size()&1)?(yes):(no);
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
5 7 2 9 6 3 3 2
2 3 5 6 7 9
1 3 4 5 7
2 3 4 6
1 2 4
1 3
2
*/