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
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){cout<<'\n';for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n,m;cin>>n>>m;
    v<vi> a(n,vi(m));cin>>a;
    vi row,col(m);
    for(vi &i:a) row.pb(*max_element(all(i)));
    for(int j=0; j<m; j++){
        int mx=a[0][j];
        for(int i=1; i<n; i++) mx=max(mx,a[i][j]);
        col[j]=mx;
    }
    v<vi> tl=a,bl=a,tr=a,br=a;
    for(int i=0; i<n; i++){
        int mx=-1;
        for(int j=0; j<m; j++){
            mx=max(mx,a[i][j]);
            tl[i][j]=max(mx,(i>0?tl[i-1][j]:0));
        }
    }
    for(int i=0; i<n; i++){
        int mx=-1;
        for(int j=m-1; j>=0; j--){
            mx=max(mx,a[i][j]);
            tr[i][j]=max(mx,(i>0?tr[i-1][j]:0));
        }
    }
    for(int i=n-1; i>=0; i--){
        int mx=-1;
        for(int j=0; j<m; j++){
            mx=max(mx,a[i][j]);
            bl[i][j]=max(mx,(i<n-1?bl[i+1][j]:0));
        }
    }
    for(int i=n-1; i>=0; i--){
        int mx=-1;
        for(int j=m-1; j>=0; j--){
            mx=max(mx,a[i][j]);
            br[i][j]=max(mx,(i<n-1?br[i+1][j]:0));
        }
    }
    int ans=1e9;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int one=-1,two=one,thr=one,fou=one;
            if(i-1>=0 && j-1>=0) one=tl[i-1][j-1];
            if(i-1>=0 && j+1<m) two=tr[i-1][j+1];
            if(i+1<n && j-1>=0) thr=bl[i+1][j-1];
            if(i+1<n && j+1<m) fou=br[i+1][j+1];
            int val=max({row[i]-1,col[j]-1,one,two,thr,fou});
            ans=min(ans,val);
        }
    }
    cout<<ans<<'\n';
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/