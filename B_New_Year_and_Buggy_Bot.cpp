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
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

const int dx[4]={1,0,-1,0};
const int dy[4]={0,-1,0,1};
void solve(){
    int n,m;cin>>n>>m;
    v<string> a(n);cin>>a;
    string s;cin>>s;
    vi b(4);iota(all(b),0);
    pair<int,int> st;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) if(a[i][j]=='S') st={i,j};
    }
    int ans=0;
    do{
        auto [x,y]=st;
        for(char c:s){
            x=x+dx[b[c-'0']];
            y=y+dy[b[c-'0']];
            if(x>=0 && x<n && y>=0 && y<m){
                if(a[x][y]=='#') break;
                if(a[x][y]=='E'){
                    ans++;
                    break;
                }
            }
            else break;
        }
    }
    while(next_permutation(all(b)));
    cout<<ans<<'\n';
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/