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

const int m=1e9+7;
vi fact;
vi primes;
v<bool> isP;
void seev(){
    isP.assign(1001000,1);
    for(int i=2; i*i<=1001000; i++){
        if(isP[i]){
            for(int j=i*i; j<=1001000; j+=i) isP[j]=0;
        }
    }
    for(int i=2; i<1001000; i++) if(isP[i]) primes.pb(i);
}
int fn(int a, int b){
    if(b==0) return 1ll;
    int k=fn(a,b/2);
    k=(k*k)%m;
    if(b&1) k=(k*a)%m;
    return k;
}
int mod_inv(int n){
    return fn(n,m-2);
}
void solve(){
    int n;cin>>n;
    vi fac;
    for(int i:primes){
        if(n==1) break;
        int ex=0;
        while(n%i==0){
            n/=i;
            ex++;
        }
        if(ex) fac.pb(ex);
    }
    if(n!=1) fac.pb(1);
    int ans=fact[fac.size()];
    map<int,int> mp;
    for(int i:fac) mp[i]++;
    for(auto i:mp){
        if(i.second==1) continue;
        int k=mod_inv(fact[i.second]);
        ans=(ans*k)%m;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    fact.assign(1001000,1);
    for(int i=2; i<1001000; i++) fact[i]=(i*fact[i-1])%m;
    seev();
    while(t--) solve();
}
/*

*/