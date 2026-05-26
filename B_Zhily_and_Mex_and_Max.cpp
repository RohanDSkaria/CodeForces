#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    set<int> s(a.begin(),a.end());
    int mx=*max_element(a.begin(),a.end()),mex=0;
    while(s.count(mex)) mex++;
    int k=mx<mex?mex:mex+1;
    cout<<((k-1)*(k-2)/2)+(mx*(k-1))+((n-k+1)*(mex+mx))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/