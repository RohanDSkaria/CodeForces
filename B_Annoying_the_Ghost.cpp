#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n),pos(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    set<int> s;
    for(int i=0; i<n; i++) s.insert(i);
    for(int i=0; i<n; i++){
        int l=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        auto it=s.lower_bound(l);
        if(l>=n || it==s.end()){
            cout<<"-1\n";
            return;
        }
        pos[i]=*it;
        s.erase(it);
    }
    int ans=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) ans+=pos[i]>pos[j];
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/