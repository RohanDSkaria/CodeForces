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

int si,sj;
int n,m;
bool isv(v<string> &a, int i, int j){
    return i<n && i>=0 && j<m && j>=0 && a[i][j]!='#';
}
bool fn(v<string> &a, string &s, string &t){
    int ci=si,cj=sj;
    for(auto i:s){
        char ch=t[i-'0'];
        if(ch=='l'){
            if(!isv(a,ci,cj-1)) return 0;
            cj--;
        }
        else if(ch=='r'){
            if(!isv(a,ci,cj+1)) return 0;
            cj++;
        }
        else if(ch=='u'){
            if(!isv(a,ci-1,cj)) return 0;
            ci--;
        }
        else if(ch=='d'){
            if(!isv(a,ci+1,cj)) return 0;
            ci++;
        }
        if(a[ci][cj]=='E') return 1;
    }
    return 0;
}
void solve(){
    cin>>n>>m;
    v<string> a(n);cin>>a;
    string s;cin>>s;
    string t="dlru";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='S') si=i,sj=j;
        }
    }
    int ans=0;
    do{
        ans+=fn(a,s,t);
    } while(next_permutation(all(t)));
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/