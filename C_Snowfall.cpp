#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>> a(4);
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(x%6==0) a[0].push_back(x);
        else if(x%3==0) a[1].push_back(x);
        else if(x%2==0) a[3].push_back(x);
        else a[2].push_back(x);
    }
    for(auto& i:a) for(int j:i) cout<<j<<' ';
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