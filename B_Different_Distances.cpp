#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>> a(4,vector<int>(n));
    vector<int> s={0,1,3,6};
    for(int i=0; i<4; i++){
        iota(a[i].begin(),a[i].end(),1ll);
        rotate(a[i].begin(),a[i].begin()+(s[i]%n),a[i].end());
    }
    for(auto& i:a){
        for(int j:i) cout<<j<<' ';
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/