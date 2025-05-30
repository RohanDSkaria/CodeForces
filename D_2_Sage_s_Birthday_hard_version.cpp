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
    vi a(n);cin>>a;
    sort(rall(a));
    auto cc=[&](int m){
        vi t;
        for(int i=0,j=n-m; i<=m; i++,j++){
            t.pb(a[i]);
            if(i!=m) t.pb(a[j]);
        }
        int c=0,nn=t.size()-1;
        for(int i=1; i<nn; i++) c+=t[i]<t[i+1] && t[i-1]>t[i];
        return c==m;
    };
    int s=0,e=(n-1)/2;
    while(s<=e){
        int m=s+(e-s)/2;
        cc(m)?s=m+1:e=m-1;
    }
    cout<<e<<endl;
    for(int i=0,k=n-e; i<=e; i++,k++){
        cout<<a[i]<<" ";
        if(i!=e) cout<<a[k]<<" ";
    }
    for(int i=e+1; i<n-e; i++) cout<<a[i]<<" ";
    cout<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/