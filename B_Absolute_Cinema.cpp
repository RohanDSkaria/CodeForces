#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    int ans=0,m=-1;
    for(int i=0; i<n; i++){
        ans+=max(a[i],b[i]);
        m=max(m,min(a[i],b[i]));
    }
    cout<<ans+m<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/