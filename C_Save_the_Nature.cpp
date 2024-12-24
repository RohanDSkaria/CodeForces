#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,pair<F,S>& p){os<<"{"<<p.first<<","<<p.second<<"}";return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n;cin>>n;
    vi p(n);cin>>p;
    int x,a,y,b,k;cin>>x>>a>>y>>b>>k;
    if(x<y){
        swap(x,y);
        swap(a,b);
    }
    sort(all(p));
    int lc=(a*b)/__gcd(a,b);
    int s=1,e=n;
    auto cc = [&](int m){
        int ans=0,r=n-1;
        int t=m/lc;
        int aa=m/a-t,bb=m/b-t;
        for(int i=0; i<t; i++) ans+=p[r--]*(x+y);
        for(int i=0; i<aa; i++) ans+=p[r--]*x;
        for(int i=0; i<bb; i++) ans+=p[r--]*y;
        return ans>=100*k;
    };
    while(s<=e){
        int m=s+(e-s)/2;
        cc(m)?e=m-1:s=m+1;
    }
    cout<<(s>n?-1:s)<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/