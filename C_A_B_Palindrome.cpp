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

string solve(){
    int a,b;cin>>a>>b;
    string s;cin>>s;
    char A='0',B='1';
    int n=s.size()-1;
    for(int i=0; i<n; i++,n--){
        if(s[i]==s[n] && s[i]=='?') continue;
        if(s[i]=='?') s[i]=s[n];
        else if(s[n]=='?') s[n]=s[i]; 
    }
    a-=count(all(s),A);
    b-=count(all(s),B);
    n=s.size();
    if(a&1) swap(a,b),swap(A,B);
    if(a&1) return "-1";
    for(int i=0; i<n; i++){
        if(s[i]!='?') continue;
        if(a>0) s[i]=s[n-1-i]=A,a-=2;
        else if(b>0){
            if(b==1 && i!=n-1-i) return "-1";
            s[i]=s[n-1-i]=B;
            b-=2;
            b+=i==n-1-i;
        }
    }
    auto fn=[](string &s){
        string t=s;
        reverse(all(t));
        return t!=s;
    };
    if(a!=0 || b!=0 || fn(s)) return "-1";
    return s;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) cout<<solve()<<endl;
}
/*

*/