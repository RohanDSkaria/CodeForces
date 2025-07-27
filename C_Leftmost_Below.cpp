#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    int mn=*min_element(a.begin(),a.end());
    for(int i=1; i<n; i++){
        if(a[i]-a[i-1]>mn) return 0;
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