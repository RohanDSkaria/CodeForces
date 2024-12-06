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
template<typename F,typename S>ostream& operator<<(ostream& os, const pair<F,S>& p){os<<p.first<<" "<<p.second;return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T>void _print(string s,T v){cout<<s<<" = "<<v<<endl;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;_print(s.substr(c+1),args...);}

pair<int,int> fn(vi &a, int l, int r, int mx, vi &ps, vi &px){
    int ans=r-l+1;
    int L=l,R=r;
    for(int i=l;i<r; i++){
        int s=i,e=r;
        if(ps[r]-(i>0?ps[i-1]+(px[r]^px[i-1]):px[r])!=mx) break;
        // deb(s,e)
        while(s<=e){
            int m=s+(e-s)/2;
            int v=ps[m]-(i>0?ps[i-1]+(px[m]^px[i-1]):px[m]);
            if(v<mx) s=m+1;
            else e=m-1;
        }
        // deb(s,e)
        if(s-i+1<ans){
            ans=s-i+1;
            L=i,R=s;
        }
    }
    return {L+1,R+1};
}
void solve(){
    int n,q;cin>>n>>q;
    vi a(n);cin>>a;
    vi ps(n),px(n);
    ps[0]=px[0]=a[0];
    for(int i=1; i<n; i++){
        ps[i]=ps[i-1]+a[i];
        px[i]=px[i-1]^a[i];
    }
    while(q--){
        int l,r;cin>>l>>r;
        l--;r--;
        int mx=ps[r]-(l>0?ps[l-1]+(px[r]^px[l-1]):px[r]);
        cout<<(fn(a,l,r,mx,ps,px))<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/