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
    string s;cin>>s;
    vi pre(n);pre[0]=a[0];
    for(int i=1; i<n; i++) pre[i]=a[i]+pre[i-1];
    int l=0,r=n-1,ans=0;
    while(l<r){
        while(l<r && s[l]!='L') l++;
        while(l<r && s[r]!='R') r--;
        if(l>=r) break;
        if(l==0) ans+=pre[r];
        else ans+=pre[r]-pre[l-1];
        l++;r--;
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