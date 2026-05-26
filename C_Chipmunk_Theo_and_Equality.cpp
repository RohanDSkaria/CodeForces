#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    vector<pair<int,int>> m;
    for(int& i:a){
        int c=0,ya=i==1;
        while(i!=1){
            m.push_back({i,c});
            (i&1)?i++:i/=2;
            c++;
        }
        m.push_back({1,c});
        if(ya) m.push_back({2,1});
    }
    sort(m.begin(),m.end());
    int ans=1e18,c=-1,cnt=0,t=0;
    for(auto& [x,y]:m){
        if(x!=c){
            if(cnt==n) ans=min(ans,t);
            c=x;
            cnt=0;
            t=0;
        }
        cnt++;
        t+=y;
    }
    if(cnt==n) ans=min(ans,t);
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