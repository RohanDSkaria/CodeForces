#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int m=1e9,M=-1,x;
    while(n--){
        cin>>x;
        m=min(m,x);
        M=max(M,x);
    }
    cout<<(M-m+1)/2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/