#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

struct DSU{
    vi p,s,S;
    DSU(int n){
        p.assign(n,0);s.assign(n,1);
        S.assign(n,0);
        for(int i=0; i<n; i++) p[i]=i;
    }
    int get(int a){
        return (p[a]==a)?a:p[a]=get(p[a]);
    }
    void uni(int x, int y){
        x=get(x);y=get(y);
        if(x==y) return;
        if(s[x]<s[y]) swap(x,y);
        p[y]=x;
        s[x]+=s[y];
    }
};
void solve(){
    int n,m;cin>>n>>m;
    DSU dsu(n+1);
    while(m--){
        string s;cin>>s;
        int x,y;cin>>x;
        if(s=="add"){
            cin>>y;

        }
        else if(s=="join"){
            cin>>y;
            dsu.uni(x,y);
        }
        else{

        }
    }
}
int32_t main(){
    IOS int t=1;
    while(t--) solve();
}
/*

*/