#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
vi g;
void solve(){
    int n,x=0;cin>>n;
    while(n--){
        int k;cin>>k;
        x^=g[k];
    }
    cout<<(x?"Alice":"Bob")<<endl;
}
int32_t main(){
    IOS int t=1;
    g.assign(1e7+1,0);
    g[1]=1;g[2]=0;
    for()
    cin>>t;
    while(t--) solve();
}
/*

*/