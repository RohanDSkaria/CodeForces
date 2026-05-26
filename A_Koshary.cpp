#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int a,b;cin>>a>>b;
    return !(a&1 && b&1);
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/