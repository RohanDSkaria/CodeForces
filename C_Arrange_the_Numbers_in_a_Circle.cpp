#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int x,ans=0,c=0,k=0,o=0,t=0;
    while(n--){
        cin>>x;
        if(x==1) o++;
        else{
            c++;
            ans+=x;
            t=x;
            k+=(x-2)/2;
        }
    }
    if(c==1) ans=t+min(o,t/2);
    else ans+=min(o,k);
    cout<<(ans<3?0ll:ans)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/