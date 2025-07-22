#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define int long long
#define v vector
#define vi v<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<p.first<<' '<<p.second;}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<'\n';for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

struct DSU{
    vi p,s,mn,mx;
    DSU(int n){
        s.assign(n+1,1);
        p.assign(n+1,0);iota(all(p),0);
        mn=mx=p;
    }
    int get(int u){
        return p[u]==u?u:p[u]=get(p[u]);
    }
    void Union(int u, int v){
        u=get(u);v=get(v);
        if(u==v) return;
        if(s[u]>s[v]) swap(u,v);
        p[u]=v;
        s[v]+=s[u];
        mn[v]=min(mn[v],mn[u]);
        mx[v]=max(mx[v],mx[u]);
    }
    void find(int u){
        cout<<mn[get(u)]<<' '<<mx[get(u)]<<' '<<s[get(u)]<<'\n';
    }
};
void solve(){
    int n,q;cin>>n>>q;
    DSU dsu(n);
    string s;
    int u,v;
    while(q--){
        cin>>s>>u;
        if(s[0]=='u'){
            cin>>v;
            dsu.Union(u,v);
        }
        else dsu.find(u);
    }    
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/