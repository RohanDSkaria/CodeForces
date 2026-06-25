#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int k=n%12;
    if(k==10){
        if(n<21) cout<<"-1\n";
        else cout<<"22 "<<n-22<<'\n';
    }
    else cout<<k<<' '<<n-k<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/