#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int> a(k);
    for(int i=0; i<n; i++){
        if(s[i]=='1') a[i%k]^=1;
    }
    for(int i=0; i<k; i++){
        if(a[i]) return 0;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/