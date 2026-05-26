#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),ans;
    for(int& i:a) cin>>i;
    int in=-1,p=0,sum=accumulate(a.begin(),a.end(),0ll),mx=sum;
    for(int i=0; i<n; i++){
        sum-=a[i];
        if(a[i]>0){
            if(mx<p-a[i]+sum){
                mx=p-a[i]+sum;
                in=i;
            }
        }
        p+=abs(a[i]);
    }
    bool ya=1;
    for(int i=in-1; i>=0; i--){
        if((a[i]>0)^ya) continue;
        ans.push_back(i+1);
        ya^=1;
    }
    if(in!=-1) ans.push_back(in+1);
    cout<<ans.size()<<'\n';
    for(int i:ans) cout<<i<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/