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

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    bool ya=0;
    int ch=0;
    for(char c:s){
        if(c=='p') ya=1;
        if(ya && c=='s'){
            cout<<"NO\n";
            return;
        }
        if(c=='.') ch++;
    }
    if(ch==n){
        cout<<"YES\n";
        return;
    }
    int i=-1,j=n;
    for(int k=0; k<n; k++){
        if(s[k]=='s'){
            i=k;
            break;
        }
    }
    for(int k=n-1; k>=0; k--){
        if(s[k]=='p'){
            j=k;
            break;
        }
    }
    int cs=0,cp=0;
    for(char c:s){
        if(c=='p') cp++;
        else if(c=='s') cs++;
    }
    if(cp==0 || cs==0) cout<<"YES\n";
    else cout<<(((i==0 && cs==1) || (j==n-1 && cp==1))?"YES\n":"NO\n");
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/