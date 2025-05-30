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
    int n;cin>>n;
    v<vi> a(n,vi(2));cin>>a;
    if(n==1){
        cout<<"1\n";
        return;
    }
    sort(all(a));
    int fmx=a[n-1][0],smx=a[n-2][0];
    int fmnx=a[0][0],smnx=a[1][0];
    sort(all(a),[](const vi &a, const vi&b){
        return a[1]<b[1];
    });
    int fmy=a[n-1][1],smy=a[n-2][1];
    int fmny=a[0][1],smny=a[1][1];
    int ans=(fmx-fmnx+1)*(fmy-fmny+1);
    if(fmx!=smx) ans=min(ans,(smx-fmnx+1)*(fmy-fmny+1));
    if(fmnx!=smnx) ans=min(ans,(fmx-smnx+1)*(fmy-fmny+1));
    if(fmy!=smy) ans=min(ans,(fmx-smnx+1)*(smy-fmny+1));
    if(fmny!=smny) ans=min(ans,(fmx-smnx+1)*(smy-smny+1));
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/