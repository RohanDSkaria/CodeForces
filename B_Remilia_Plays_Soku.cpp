#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,a,b,k;cin>>n>>a>>b>>k;
    cout<<(n<4?1:k+min(abs(a-b),n-abs(a-b)))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/