#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,m,k;cin>>n>>m>>k;
    set<int> a,b;
    while(n--){
        int x;cin>>x;
        if(x<=k) a.insert(x);
    }
    while(m--){
        int x;cin>>x;
        if(x<=k) b.insert(x);
    }
    int c=0,t=0;
    for(int i=1; i<=k; i++){
        if(!a.count(i) && !b.count(i)) return 0;
        if(a.count(i) && !b.count(i)) c++;
        if(!a.count(i) && b.count(i)) t++; 
    }
    return c<=k/2 && t<=k/2;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/