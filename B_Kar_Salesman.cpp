#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    int M=*max_element(all(a));
    int sum=accumulate(all(a),0ll);
    cout<<max((sum+k-1)/k,M)<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/