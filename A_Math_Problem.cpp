#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    int l=1e9,r=0;
    while(n--){
        int x,y;cin>>x>>y;
        l=min(l,y);
        r=max(r,x);
    }
    cout<<max(0ll,r-l)<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/