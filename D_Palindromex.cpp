#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    n*=2;
    vector<int> a(n);
    int f=-1,s;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(!a[i]){
            if(f==-1) f=i;
            s=i;
        }
    }
    auto fn=[&](int l, int r){
        while(l>=0 && r<n && a[l]==a[r]) l--,r++;
        set<int> s;
        for(int i=l+1; i<r; i++) s.insert(a[i]);
        int mex=0;
        while(s.count(mex)) mex++;
        return mex;
    };
    cout<<max({fn(f,f),fn(s,s),fn(f+(s-f)/2,s-(s-f)/2)})<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/