#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y;cin>>x>>y;
    swap(x,y);
    if(x<y || y<((x+y-1)&1)){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    int n=x+y,k=x-(n+1)/2;
    for(int i=1; i<n-2*k; i++) cout<<i<<' '<<i+1<<'\n';
    for(int i=n-2*k; i<n; i+=2) cout<<i<<' '<<i+1<<'\n'<<i<<' '<<i+2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/