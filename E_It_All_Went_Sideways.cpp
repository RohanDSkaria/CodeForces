#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    map<int,int> m;
    int ans=0,mn=1e9,mx=0;
    for(int i=n-1; i>=0; i--){
        mn=min(mn,a[i]);
        ans+=a[i]-mn;
        mx=max(mx,m[mn]++);
    }
    cout<<ans+mx<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/