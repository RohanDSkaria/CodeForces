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
    vi b(n);
    while(q--){
        int l,r;cin>>l>>r;
        l--;r--;
        b[l]++;
        if(r+1<n) b[r+1]--;
    }
    for(int i=1; i<n; i++) b[i]+=b[i-1];
    sort(all(b));
    sort(all(a));
    int ans=0;
    for(int i=0; i<n; i++) ans+=a[i]*b[i];
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/