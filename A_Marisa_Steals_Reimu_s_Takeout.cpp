#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int m[3]{},x;
    while(n--){
        cin>>x;
        m[x]++;
    }
    cout<<m[0]+min(m[1],m[2])+(abs(m[1]-m[2])/3)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/