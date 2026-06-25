#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    for(int i=0; i<n; i++){
        vector<int> suf(n+1);
        for(int j=n-1; j>=0; j--) suf[j]=max(suf[j+1],a[(i+j)%n]);
        int ans=0,p=0;
        for(int j=1; j<n; j++){
            p=max(p,a[(j-1+i)%n]);
            ans+=min(p,suf[j]);
        }
        cout<<ans<<" \n"[i==n-1];
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/