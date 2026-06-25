#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<n && a[l]<a[n/2]) l++;
    while(r>=0 && a[r]>a[n/2]) r--;
    cout<<max(l,n-r-1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/