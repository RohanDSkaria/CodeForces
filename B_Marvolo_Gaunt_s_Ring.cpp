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
    int n,p,q,r;cin>>n>>p>>q>>r;
    vi a(n);cin>>a;
    v<pair<int,int>> suf(n);
    int pm=a[0],pM=a[0];
    suf[n-1].first=suf[n-1].second=a[n-1];
    for(int i=n-2; i>=0; i--){
        suf[i].first=min(a[i],suf[i+1].first);
        suf[i].second=max(a[i],suf[i+1].second);
    }
    int ans=-3e18;
    for(int j=0; j<n; j++){
        pm=min(pm,a[j]);
        pM=max(pM,a[j]);
        int b=p*(p<0?pm:pM);
        int c=r*(r<0?suf[j].first:suf[j].second);
        ans=max(ans,b+(q*a[j])+c);
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