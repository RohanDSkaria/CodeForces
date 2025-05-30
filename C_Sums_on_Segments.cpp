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
    vi a(n);cin>>a;
    int z=n;
    for(int i=0; i<n; i++) if(abs(a[i])!=1) z=i;
    auto fn=[&](int s, int e)-> pair<int,int>
    {
        int mx=0,mn=2e9;
        int cmx=0,cmn=0;
        for(int i=s; i<e; i++){
            cmx=max(a[i],cmx+a[i]);
            cmn=min(a[i],cmn+a[i]);
            mx=max(mx,cmx);
            mn=min(mn,cmn);
        }
        return {mn,mx};
    };
    set<int> s={0};
    pair<int,int> leftsub=fn(0,z),rightsub=fn(z+1,n);
    pair<int,int> left={0,0},right={0,0};
    for(int i=z-1,sum=0; i>=0; i--){
        sum+=a[i];
        auto &[x,y]=left;
        x=min(x,sum);
        y=max(y,sum);
    }
    for(int i=z+1,sum=0; i<n; i++){
        sum+=a[i];
        auto &[x,y]=right;
        x=min(x,sum);
        y=max(y,sum);
    }
    for(int i=leftsub.first; i<=leftsub.second; i++) s.insert(i);
    for(int i=rightsub.first; i<=rightsub.second; i++) s.insert(i);
    for(int i=left.first+(z<n?a[z]:0)+right.first; i<=right.second+left.second+(z<n?a[z]:0); i++) s.insert(i);
    cout<<s.size()<<endl<<s<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/