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
    int n,m,ans=0;cin>>n>>m;
    vi a(n);cin>>a[0];
    for(int i=1; i<n; i++){
        int x;cin>>x;
        a[i]=x+a[i-1];
    }
    while(m--){
        int l,r;cin>>l>>r;
        l--,r--;
        int sum;
        if(l>0) sum=a[r]-a[l-1];
        else sum=a[r];
        ans+=max(0ll,sum);
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/