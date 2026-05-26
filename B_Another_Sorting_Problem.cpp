#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int mx=-1;
    for(int i=1; i<n; i++) mx=max(mx,a[i-1]-a[i]);
    for(int i=1; i<n; i++) if(a[i-1]>a[i]) a[i]+=mx;
    for(int i=1; i<n; i++) if(a[i-1]>a[i]) return 0;
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