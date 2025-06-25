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

const int dx[4]={1,0,-1,0};
const int dy[4]={0,-1,0,1};
bool isk(v<string> &a, int i, int j){
    return i>=0 && i<a.size() && j>=0 && j<a[0].size() && a[i][j]=='B';
}
bool dfs(v<string> &a, int x, int y){
    a[x][y]='W';
    for(int d=0; d<4; d++){
        int nx=x+dx[d];
        int ny=y+dy[d];
        if(!isk(a,nx,ny)) continue;
        if(dfs(a,nx,ny)) return 1;
    }
    return 1;
}
bool solve(){
    int m;cin>>m;
    v<string> a(2),b;cin>>a;
    b=a;
    int ya=0,ya2=0;
    auto fn=[&](v<string> &a, int k, int y, int &ya){
        for(int j=0,yaa=1; j<m && yaa; j++){
            for(int i=k; i<2 && i>=0; i+=y){
                if(a[i][j]=='B'){
                    if(ya){
                        ya=0;
                        yaa=0;
                        break;
                    }
                    dfs(a,i,j);
                    ya=1;
                }
            }
        }
    };
    fn(a,0,1,ya);
    fn(b,1,-1,ya2);
    return ya||ya2;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/