#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    sort(a.rbegin(),a.rend());
    for(int i=2; i<n; i++){
        if(a[i]==a[i-2]%a[i-1]) continue;
        cout<<"-1\n";
        return;
    }
    cout<<a[0]<<' '<<a[1]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/