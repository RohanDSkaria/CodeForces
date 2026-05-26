#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b;
    for(int& i:a) cin>>i;
    b=a;
    sort(b.begin(),b.end());
    int ans=0,sa=0,sb=0,mx=0;
    for(int i=0; i<n; i++){
        sa+=a[i];
        sb+=b[i];
        ans+=abs(sb-sa);
    }
    map<int,int> m;
    for(int i=n-1; i>=0; i--) m[b[i]]=i;
    for(int i=0; i<n; i++) mx=max(mx,i-m[a[i]]);
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