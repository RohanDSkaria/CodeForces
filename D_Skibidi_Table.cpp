#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define int long long
#define v vector
#define vi v<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<p.first<<' '<<p.second;}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n,q;cin>>n>>q;
    function<int(int,int,int)> get=[&](int a, int b, int k){
        if(a<2 && b<2){
            if(a==0) return b*3+1;
            return 3-b;
        }
        int kk=k/2;
        if(a<kk){
            if(b<kk) return get(a,b,k>>1);
            return 3*kk*kk+get(a,b%kk,k>>1);
        }
        else{
            if(b<kk) return 2*kk*kk+get(a%kk,b,k>>1);
            return kk*kk+get(a%kk,b%kk,k>>1);
        }
    };
    function<pair<int,int>(int,int)> find=[&](int a, int k){
        if(a<3) return pair<int,int>{a,a};
        if(a<5) return pair<int,int>{5-a,2-(a&1)};
        int kk=k*k/4;
        if(a<=kk) return find(a,k>>1);
        int t=a%(kk);
        pair<int,int> p=find(t?t:kk,k>>1);
        if(a<=2*kk) return pair<int,int>{k/2+p.first,k/2+p.second};
        if(a<=3*kk) return pair<int,int>{k/2+p.first,p.second};
        return pair<int,int>{p.first,k/2+p.second};
    };
    while(q--){
        char c;cin>>c>>c;
        int a,b;cin>>a;
        if(c=='>'){
            cin>>b;
            cout<<get(a-1,b-1,1ll<<n)<<'\n';
        }
        else cout<<find(a,1ll<<n)<<'\n';
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/