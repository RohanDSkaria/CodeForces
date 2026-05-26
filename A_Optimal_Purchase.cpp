#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,a,b;cin>>n>>a>>b;
    cout<<min(n*a,(n/3)*b+min((n%3)*a,b))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/