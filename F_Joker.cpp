#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define v vector
#define vi v<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n,m,q;cin>>n>>m>>q;
    vi a(q);cin>>a;
    v<pair<int,int>> b={{m,m}};
    for(int i:a){
        v<pair<int,int>> t;
        for(auto &[x,y]:b){
            if(x<=i && i<=y){
                t.pb({1,1});
                t.pb({n,n});
                if(x!=y) t.pb({x,y});
            }
            else if(i<x) t.pb({x-1,y});
            else t.pb({x,y+1});
        }
        b.clear();
        int ans=0;
        sort(all(t));
        for(int i=1; i<t.size(); i++){
            auto &[x,y]=t[i];
            auto &[px,py]=t[i-1];
            if(x<=py) x=px,y=max(y,py);
            else{
                b.pb(t[i-1]);
                ans+=py-px+1;
            }
        }
        b.pb(t.back());
        cout<<ans+t.back().second-t.back().first+1<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/