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

int n,x,y;
int low(vi &a, int s, int t){
    int e=a.size()-1;
    while(s<=e){
        int m=s+(e-s)/2;
        int k=t-a[m];
        (k>y)?s=m+1:e=m-1;
    }
    return s;
}
int upp(vi &a, int s, int t){
    int e=a.size()-1;
    while(s<=e){
        int m=s+(e-s)/2;
        int k=t-a[m];
        (k<x)?e=m-1:s=m+1;
    }
    return s;
}
void solve(){
    cin>>n>>x>>y;
    vi a(n);cin>>a;
    sort(all(a));
    int sum=accumulate(all(a),0ll);
    int ans=0;
    // deb(sum)
    for(int i=0; i<n; i++){
        if(sum-a[i]<x) break;
        int p=low(a,i+1,sum-a[i]);
        int q=upp(a,i+1,sum-a[i]);
        // deb(a,i,p,q)
        ans+=q-p;
        // deb(ans)
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