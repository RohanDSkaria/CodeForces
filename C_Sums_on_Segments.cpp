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
    vi a(n);cin>>a;
    set<int> ans;
    pair<int,int> left,right,centre;
    int k=n;
    auto fn=[&](int l, int r) -> pair<int,int> {
        int mx=0,mn=0;
        int sumx=0,sumn=0;
        for(int i=l; i<r; i++){
            sumx=max(a[i],sumx+a[i]);
            sumn=min(a[i],sumn+a[i]);
            mx=max(mx,sumx);
            mn=min(mn,sumn);
        }
        return {mn,mx};
    };
    for(int i=0; i<n; i++) if(abs(a[i])!=1) k=i;
    left=fn(0,k);
    right=fn(k+1,n);
    if(k!=n){
        int mn_l=0,mx_l=0,mn_r=0,mx_r=0;
        for(int i=k-1,c=0; i>=0; i--){
            c+=a[i];
            mn_l=min(mn_l,c);
            mx_l=max(mx_l,c);
        }
        for(int i=k+1,c=0; i<n; i++){
            c+=a[i];
            mn_r=min(mn_r,c);
            mx_r=max(mx_r,c);
        }
        centre={a[k]+mn_l+mn_r,a[k]+mx_l+mx_r};
    }
    for(int i=left.first; i<=left.second; i++) ans.insert(i);
    for(int i=right.first; i<=right.second; i++) ans.insert(i);
    for(int i=centre.first; i<=centre.second; i++) ans.insert(i);
    cout<<ans.size()<<'\n'<<ans<<'\n';
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/