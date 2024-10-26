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

void solve(){
    int n,q;cin>>n>>q;
    vi a(n);cin>>a;
    int sum=accumulate(all(a),0ll);
    for(int i=1; i<n; i++) a[i]+=a[i-1];
    while(q--){
        int l,r,k;cin>>l>>r>>k;
        l--,r--;
        int rs=a[r];
        if(l) rs-=a[l-1];
        int g=sum-rs+(k*(r-l+1));
        cout<<((g&1)?"YES":"NO")<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/