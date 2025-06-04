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
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n,m;cin>>n>>m;
    vi a(m);cin>>a;
    sort(all(a));
    v<vi> ans;
    for(int i=0,k=(n+1)/2; i<k; i++){
        vi t(6);
        t[0]=t[2]=t[4]=a[i];
        t[1]=t[3]=t[5]=a[m-i-1];
        ans.pb(t);
    }
    cout<<ans;
    for(int i=0,k=n/2; i<k; i++){
        for(int j=1; j<6; j+=2) cout<<ans[i][j]<<" "<<ans[i][j-1]<<" \n"[j==5];
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/