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

void solve(){
    string s;
    s+=char(90)+char(100);
    int n,m,k;cin>>n>>m>>k;
    v<string> a(n);cin>>a;
    priority_queue<pair<int,pair<int,int>>> q;
    auto cnt=[&](int x, int y){
        int c=0;
        for(int i=x-k; i<=x+k; i++){
            for(int j=y-k; j<=y+k; j++){
                if(i<0 || i>=n || j<0 || j>=m) continue;
                if(i!=x-k && i!=x+k && j!=y-k && j!=y+k) continue;
                c+=a[i][j]=='g';
            }
        }
        return c;
    };
    auto fn=[&](int x, int y){
        int c=cnt(x,y);
        for(int i=x-k+1; i<x+k; i++){
            for(int j=y-k+1; j<y+k; j++){
                if(i<0 || i>=n || j<0 || j>=m) continue;
                c-=a[i][j]=='g';
            }
        }
        return c;
    };
    auto bomb=[&](int x, int y){
        for(int i=x-k; i<=x+k; i++){
            for(int j=y-k; j<=y+k; j++){
                if(i<0 || i>=n || j<0 || j>=m) continue;
                a[i][j]='.';
            }
        }
    };
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]!='.') continue;
            q.push({fn(i,j),{i,j}});

        }
    }
    int ans=0;
    while(!q.empty()){
        auto [_,t]=q.top();
        auto [x,y]=t;
        q.pop();
        ans+=cnt(x,y);
        // deb(ans)
        bomb(x,y);
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