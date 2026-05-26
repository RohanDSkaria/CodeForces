#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int l,r,g;cin>>l>>r>>g;
    if(l%g) l+=g-(l%g);
    r-=r%g;
    for(int d=r-l; d>=0; d-=g){
        for(int i=l; i+d<=r; i+=g){
            if(__gcd(i,i+d)==g){
                cout<<i<<' '<<i+d<<'\n';
                return;
            }
        }
    }
    cout<<"-1 -1\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/