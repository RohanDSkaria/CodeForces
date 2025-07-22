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

void solve(){
    int n;cin>>n;
    vi d(n);cin>>d;
    v<vi> a(n,vi(2));cin>>a;
    for(int i=0,l=0,r=0; i<n; i++){
        l=max(l+d[i],a[i][0]);
        r=min(r+(d[i]!=0),a[i][1]);
        if(l>r){
            cout<<"-1\n";
            return;
        }
        a[i]={l,r};
    }
    for(int i=n-1; i; i--){
        if(d[i]!=-1) continue;
        d[i]=a[i-1][1]<a[i][1];
    }
    if(d[0]==-1) d[0]=0<a[0][1];
    cout<<d<<'\n';
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/