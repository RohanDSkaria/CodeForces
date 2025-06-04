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
    int n;cin>>n;
    v<vi> a(n,vi(2));cin>>a;
    if(n==1){
        cout<<"1\n";
        return;
    }
    multiset<int> x,y;
    for(int i=0; i<n; i++){
        x.insert(a[i][0]);
        y.insert(a[i][1]);
    }
    int ans=1ll<<62;
    int mnx=*x.begin(),mx=*x.rbegin();
    int mny=*y.begin(),my=*y.rbegin();
    for(vi &i:a){
        if(i[0]!=mnx && i[0]!=mx && i[1]!=mny && i[1]!=my) continue;
        x.erase(x.find(i[0]));
        y.erase(y.find(i[1]));
        mnx=*x.begin(),mx=*x.rbegin();
        mny=*y.begin(),my=*y.rbegin();
        int t=(mx-mnx+1)*(my-mny+1);
        if(t==n-1) t+=min(mx-mnx,my-mny)+1;
        ans=min(ans,t);
        x.insert(i[0]);
        y.insert(i[1]);
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/