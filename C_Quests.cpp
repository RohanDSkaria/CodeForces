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
    int n,k,m=-1,ans=-1,c=0;cin>>n>>k;
    vi a(n),b(n);cin>>a>>b;
    for(int i=0; i<min(n,k); i++){
        c+=a[i];
        m=max(m,b[i]);
        ans=max(ans,c+(k-i-1)*m);
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