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
    int n,m,k;cin>>n>>m>>k;
    const int inf=INT_MAX;
    v<vi> col(n,vi(m-1)),row(n-1,vi(m));cin>>col>>row;
    if(k&1){
        v<vi> a(n,vi(m,-1));
        cout<<a;
        return;
    }
    k/=2;
    const int dx[4]={1,0,-1,0};
    const int dy[4]={0,-1,0,1};
    v<v<vi>> dp(n,v<vi>(m,vi(k+1,inf)));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) dp[i][j][0]=0;
    }
    for(int st=1; st<=k; st++){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int d=0; d<4; d++){
                    int nx=i+dx[d];
                    int ny=j+dy[d];
                    if(nx>=0 && nx<n && ny>=0 && ny<m){
                        int val=nx==i?col[i][ny>j?j:ny]:row[nx>i?i:nx][j];
                        dp[i][j][st]=min(dp[i][j][st],dp[nx][ny][st-1]+val);
                    }
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<2*dp[i][j][k]<<" \n"[j==m-1];
        }
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/