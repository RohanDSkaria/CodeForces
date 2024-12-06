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

int maxd(int n){
    int m=0;
    while(n){
        m=max(m,n%10);
        n/=10;
    }
    return m;
}
int mind(int n){
    int m=10;
    while(n){
        m=min(m,n%10);
        n/=10;
    }
    return m;
}
int fn(int n, int s){
    int p=0,np=0;
    while(n){
        int k=n%10;
        if(k==2 || k==3 || k==5 || k==7) p+=k;
        else np+=k;
        n/=10;
    }
    return abs(np-p)<=s;
}
void solve(){
    int l,r,k,s,n,x;cin>>l>>r>>k>>s>>n>>x;
    for(int i=l; i<=r; i++){
        if(maxd(i)==x && mind(i)==n && fn(i,s)) k--;
        if(!k){
            cout<<i<<endl;
            return;
        }
    }
    cout<<-1;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/