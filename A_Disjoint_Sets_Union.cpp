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
    vi p,s;
    DSU(int n){
        s.assign(n+1,1);
        p.assign(n+1,0);iota(all(p),0);
    }
    int get(int u){
        return p[u]==u?u:p[u]=get(p[u]);
    }
    void Union(int u, int v){
        int x=get(u),y=get(v);
        if(s[x]>s[y]) swap(x,y);
        p[x]=y;
        s[y]+=s[x];
    }
    bool isConnected(int u, int v){
        return get(u)==get(v);
    }
};
void solve(){
    int n,q;cin>>n>>q;
    DSU dsu(n);
    while(q--){
        string s;
        int u,v;cin>>s>>u>>v;
        if(s[0]=='u') dsu.Union(u,v);
        else cout<<(dsu.isConnected(u,v)?"YES\n":"NO\n");
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/