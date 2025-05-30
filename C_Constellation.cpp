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
    map<vi,int> m;
    for(int i=0; i<n; i++) m[a[i]]=i+1;
    int f=-1,M=1e9;
    vi t={M,-M};
    for(int i=0; i<n; i++){
        if(a[i][0]<t[0]) t=a[i];
        else if(a[i][0]==t[0] && a[i][1]>t[1]) t=a[i];
    }
    f=m[t];
    auto half=[&](const vi &a){
        int dx=a[0]-t[0],dy=a[1]-t[1];
        return dy<0 || (!dy && dx>0);
    };
    auto cross=[&](const vi &a, const vi &b){
        int xa=a[0]-t[0],ya=a[1]-t[1];
        int xb=b[0]-t[0],yb=b[1]-t[1];
        return xa*yb-xb*ya;
    };
    auto dot=[&](const vi &a, const vi &b){
        int xa=a[0]-t[0],ya=a[1]-t[1];
        int xb=b[0]-t[0],yb=b[1]-t[1];
        return xa*xb+ya*yb;
    };
    sort(all(a), [&](const vi &a, const vi &b){
        bool ha=half(a),hb=half(b);
        if(ha!=hb) return ha<hb;
        int k=cross(a,b);
        if(!k){
            int xa=a[0]-t[0],ya=a[1]-t[1];
            int xb=b[0]-t[0],yb=b[1]-t[1];
            return xa*xa+ya*ya < xb*xb+yb*yb;
        }
        return k>0;
    });
    f=2;
    while(!cross(a[1],a[f]) && dot(a[1],a[f])>0) f++;
    swap(a[2],a[f]);
    for(int i=0; i<3; i++) cout<<m[a[i]]<<" ";
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/