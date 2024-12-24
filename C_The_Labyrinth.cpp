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

int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
v<vi> isv,val;
int n,m;
vi cnt;

void fn(v<string> &a, int i, int j,int cc){
    isv[i][j]=1;
    cnt[cc]++;
    val[i][j]=cc;
    for(int d=0; d<4; d++){
        int ni=i+dx[d];
        int nj=j+dy[d];
        if(ni>=0 && ni<n && nj>=0 && nj<m && a[ni][nj]=='.' && !isv[ni][nj]) fn(a,ni,nj,cc);
    }
}
void solve(){
    cin>>n>>m;
    v<string> a(n);cin>>a;
    val.assign(n,vi(m));
    isv.assign(n,vi(m));
    cnt.assign(n*m,0);
    int cc=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='.' && !isv[i][j]){
                fn(a,i,j,cc++);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]!='*') continue;
            set<int> st;
            int c=1;
            for(int d=0; d<4; d++){
                int ni=i+dx[d];
                int nj=j+dy[d];
                if(ni>=0 && ni<n && nj>=0 && nj<m && a[ni][nj]=='.'){
                    int k=val[ni][nj];
                    if(st.count(k)) continue;
                    c+=cnt[k];
                    st.insert(k);
                }
            }
            a[i][j]=(c%10)+'0';
        }
    }
    for(auto &i:a) cout<<i<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/