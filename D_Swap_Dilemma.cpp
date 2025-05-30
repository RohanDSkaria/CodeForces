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

int inva,invb;
void merge(vi &a, int s, int e){
    int m=s+(e-s)/2,k=e-s+1;
    vi t(k);
    int l=s,r=m+1;
    for(int i=s; i<=e; i++){
        if((l<=m && r<=e && a[l]<=a[r]) || r>e) t[i-s]=a[l++];
        else t[i-s]=a[r++],inva+=m-l+1;
    }
    for(int i=s; i<=e; i++) a[i]=t[i-s];
}
void mergesort(vi &a, int s, int e){
    if(s==e) return;
    int m=s+(e-s)/2;
    mergesort(a,s,m);
    mergesort(a,m+1,e);
    merge(a,s,e);
}
bool solve(){
    int n;cin>>n;
    vi a(n),b(n);cin>>a>>b;
    inva=0;invb=0;
    mergesort(a,0,n-1);
    swap(inva,invb);
    mergesort(b,0,n-1);
    return (inva&1)==(invb&1) && a==b;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/