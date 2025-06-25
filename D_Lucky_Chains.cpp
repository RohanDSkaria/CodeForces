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
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

const int M=1e7+1;
vi spf;
void solve(){
    int x,y;cin>>x>>y;
    int d=y-x;
    if(d==1){
        cout<<"-1\n";
        return;
    }
    if(__gcd(x,y)!=1){
        cout<<"0\n";
        return;
    }
    vi pf;
    while(d>1){
        int k=spf[d];
        pf.pb(k);
        while(d%k==0) d/=k;
    }
    int ans=1e9;
    for(auto i:pf) ans=min(ans,i-(x%i));
    cout<<ans<<'\n';
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    spf.assign(M,-1);
    for(int i=2; i<M; i++){
        if(spf[i]==-1){
            spf[i]=i;
            for(int j=i*i; j<M; j+=i) if(spf[j]==-1) spf[j]=i;
        }
    }
    while(t--) solve();
}
/*

*/