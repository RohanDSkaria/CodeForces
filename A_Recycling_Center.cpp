#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,c;cin>>n>>c;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    sort(a.rbegin(),a.rend());
    int k=1,ans=0;
    for(int i:a){
        if(i>c) ans++;
        else if(i*k>c) ans++;
        else k*=2;
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