#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x,y,z;cin>>n>>x>>y>>z;
    int ans=(n+x+y-1)/(x+y);
    if(x*z>=n) ans=min(ans,(n+x-1)/x);
    else{
        n-=x*z-x-(10*y)+1;
        ans=min(ans,z+n/(x+(10*y)));
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