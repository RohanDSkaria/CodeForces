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
    string n;cin>>n;
    int a=0,b=0,ya=1;
    for(int i=0; i<n.size(); i++){
        if(ya) a=a*10+(n[i]-'0');
        else b=b*10+(n[i]-'0');
        ya^=1;
    }
    cout<<(a+1)*(b+1)-2<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
1 4
2 3
3 2
4 1
6 9
7 8
8 7
9 6

*/