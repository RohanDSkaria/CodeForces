#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k,q;cin>>n>>k>>q;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    a.push_back(q+1);
    int ans=0;
    for(int i=0,p=-1; i<=n; i++){
        if(a[i]<=q) continue;
        int l=i-p-1;
        if(l>=k){
            int t=l-k+1;
            ans+=t*(t+1)/2;
        }
        p=i;
    }
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