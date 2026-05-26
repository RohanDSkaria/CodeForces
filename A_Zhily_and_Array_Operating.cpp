#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    for(int i=n-2; i>=0; i--){
        if(a[i+1]<0) continue;
        a[i]+=a[i+1];
    }
    int ans=0;
    for(int i:a) ans+=i>0;
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/