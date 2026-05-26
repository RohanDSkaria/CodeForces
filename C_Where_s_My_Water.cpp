#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,h;cin>>n>>h;
    vector<int> a(n),b;
    for(int& i:a) cin>>i;
    b=a;
    vector<pair<int,int>> suf(n),pre(n);
    suf[n-1]={0,n};
    for(int i=n-2; i>=0; i--){
        if(a[i+1]>=suf[i+1].first) suf[i]={a[i+1],i+1};
        else suf[i]=suf[i+1];
    }
    pre[0]={0,-1};
    for(int i=1; i<n; i++){
        if(a[i-1]>=pre[i-1].first) pre[i]={a[i-1],i-1};
        else pre[i]=pre[i-1];
    }
    int ans=(h-max(a[0],suf[0].first))*n,mx=0;
    for(int i=1; i<n; i++) a[i]+=a[i-1];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int l1=pre[i].first,r1=suf[i].first;
            int l2=pre[j].first,r2=suf[j].first;
            mx=max(mx,l2<=r1?fn(l1,r2):(fn(l1,r1)+fn(l2,r2)));
        }
    }


    for(int i=0; i<n; i++){
        int l=pre[i].first;
        for(int j=i+1; j<n; j++){
            int r=suf[j].first,t=0;
            if(l>r) t=(l-r)*(n-pre[i].second);
            else t=(r-l)*(suf[j].second+1);
            l=min(l,r);
            mx=max(mx,(l*(suf[j].second-pre[i].second+1))-(a[suf[j].second]-(pre[i].second>0?a[pre[i].second-1]:0)));
        }
    }
    cout<<ans+mx<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/