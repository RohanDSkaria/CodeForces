#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int ans=1e9,sum=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        sum+=x;
        cout<<(ans=min(ans,sum/(i+1)))<<" \n"[i==n-1];
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/