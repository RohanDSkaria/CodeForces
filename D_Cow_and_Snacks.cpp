#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define v vector
#define vi v<int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

vi dsu(100001);
int find(int a){
    return dsu[a]=(dsu[a]==a)?(a):(find(dsu[a]));
}
void solve(){
    int n,k,ans=0;cin>>n>>k;
    for(int i=0; i<=n; i++) dsu[i]=i;
    while(k--){
        int x,y;cin>>x>>y;
        x=find(x),y=find(y);
        (x==y)?ans++:dsu[x]=y;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    while(t--) solve();
}