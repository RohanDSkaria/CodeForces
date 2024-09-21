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
    int n;cin>>n;
    vi a(n);cin>>a;
    sort(all(a));
    // vi b;b.pb(a[0]);
    // int s=1,e=n-1;
    // for(int i=1; i<n; i++){
    //     if(i&1) b.pb(a[e--]);
    //     else b.pb(a[s++]);
    // }
    int ans=a[0];
    for(int i=1; i<n; i++){
        b[i]=gcd(b[i],b[i-1]);
        ans+=b[i];
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/