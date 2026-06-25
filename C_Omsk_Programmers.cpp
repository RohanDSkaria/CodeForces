#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,x;cin>>a>>b>>x;
    int ans=1e9,c=0,t=0;
    int aa=a,bb=b;
    while(aa) c++,aa/=x;
    while(bb) t++,bb/=x;
    for(int i=0; i<=c; i++){
        if(i) a/=x;
        bb=b;
        for(int j=0; j<=t; j++){
            if(j) bb/=x;
            ans=min(ans,i+j+abs(a-bb));
        }
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