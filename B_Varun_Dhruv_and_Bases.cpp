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

int fn(int a, int b){
    if(b==0) return 1;
    int k=fn(a,b/2);
    k=k*k;
    if(b&1) k*=a;
    return k;
}
int toD(string s, int b){
    int ans=0,n=s.size();
    for(int i=n-1; i>=0; i--){
        ans+=(s[i]-'0')*fn(b,n-i-1);
    }
    return ans;
}
string fn2(int a, int b){
    if(a==0) return "0";
    string ans;
    while(a){
        ans+=to_string(a%b);
        a/=b;
    }
    reverse(all(ans));
    return ans;
}
void solve(){
    int a,b,c;
    string n,m;
    char op;
    cin>>n>>a>>m>>b>>c>>op;
    int A=toD(n,a);
    int B=toD(m,b);
    int C;
    if(op=='+') C=A+B;
    else if(op=='-') C=A-B;
    else if(op=='/') C=A/B;
    else C=A*B;
    cout<<fn2(C,c)<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/