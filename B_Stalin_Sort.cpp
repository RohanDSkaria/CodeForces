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

template<typename T>
class segtree{
public:
    v<T> t;
    int n;
    T idn;
    segtree(v<T> &a,T idn):idn(idn){
        n=a.size();
        t.assign(4*n,idn);
        for(int i=0; i<n; i++) set(i,a[i]);
    }
    T merge(T a,T b){
        return 
    }
    int query(int l,int r){
        function<T(int,int,int)> f=[&](int tid,int tl,int tr)->T {
            if(l>tr || r<tl) return idn;
            if(l<=tl && r>=tr) return t[tid];
            int tm=(tl+tr)/2;
            return merge(f(2*tid+1,tl,tm),f(2*tid+2,tm+1,tr));
        };
        return f(0,0,n-1);
    }
    void set(int id,T val){
        function<void(int,int,int)> f=[&](int tid,int tl,int tr){
            if(tl==tr){
                t[tid]=val;
                return;
            }
            int tm=(tl+tr)/2;
            if(id<=tm) f(2*tid+1,tl,tm);
            else f(2*tid+2,tm+1,tr);
            t[tid]=merge(t[2*tid+1],t[2*tid+2]);
        };
        f(0,0,n-1);
    }
};
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    int ans=n;
    for(int i=0; i<n; i++){
        int c=0;
        for(int j=i+1; j<n; j++) c+=a[j]>a[i];
        ans=min(ans,c+i);
    }
    cout<<ans<<"\n";
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/