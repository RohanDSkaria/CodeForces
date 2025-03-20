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

const int m=998244353;
int pom(int a, int b){int k=1;while(b){if(b&1)k=k*a%m;a=a*a%m;b>>=1;}return k;}
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    int ans=0,cnt1=0,cnt3=0;
    vi b;
    int t=0,tot=0;
    int l=0,r=n-1;
    while(r && a[r]!=3) r--;
    while(l<n && a[l]!=1) l++;
    for(int k=l; k<=r; k++) tot+=a[k]==2,cnt1+=a[k]==1,cnt3+=a[k]==3;
    if(tot==0){
        cout<<0<<endl;
        return;
    }
    for(int i=l; i<=r; i++){
        if(a[i]==1) b.pb(tot),t=0;
        else if(a[i]==2) tot--,t++;
        else if(a[i]==3 && (cnt1>1 || cnt3>1)) b.pb(t);
    }
    if((cnt1==1 && cnt3>1) || (cnt3==1 && cnt1>1)) b.pop_back();
    for(int i:b) ans=(ans+pom(2,i)+m-1)%m;
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/