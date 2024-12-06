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
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T>void _print(string s,T v){cerr<<s<<" = "<<v<<endl;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cerr<<s.substr(0,c)<<" = "<<v<<endl;_print(s.substr(c+1),args...);}

void solve(){
    int a,b;cin>>a>>b;
    int x=0;
    if((a-1)%4==0) x=a-1;
    else if((a-1)%4==1) x=1;
    else if((a-1)%4==2) x=a;
    else x=0;
    if(x==b) cout<<a;
    else cout<<a+((x^b)==a?2:1);
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/