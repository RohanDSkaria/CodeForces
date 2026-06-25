#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,mx=0,mn=1e9;cin>>n;
    while(n--){
        int x;cin>>x;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<mx-mn+1<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/