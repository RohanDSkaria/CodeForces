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
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<'\n';for(auto&i:v)os<<i<<'\n';return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<'\n';for(auto&[k,v]:m)os<<k<<" -> "<<v<<'\n';return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<'\n';if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

struct mnMxSt{
    vi st,mn,mx;
    void push_back(int n){
        st.pb(n);
        int a=mn.size()?mn.back():1e18;
        int b=mx.size()?mx.back():0;
        mn.pb(min(n,a));
        mx.pb(max(n,b));
    }
    void pop_back(){
        st.pop_back();
        mn.pop_back();
        mx.pop_back();
    }
    int get_mx(){
        return mx.size()?mx.back():0;
    }
    int get_mn(){
        return mn.size()?mn.back():1e18;
    }
};
int get_mx(mnMxSt &a, mnMxSt &b){
    return max(a.get_mx(),b.get_mx());
}
int get_mn(mnMxSt &a, mnMxSt &b){
    return min(a.get_mn(),b.get_mn());
}
void transfer(mnMxSt &a, mnMxSt &b){
    while(!a.st.empty()){
        b.push_back(a.st.back());
        a.pop_back();
    }
}
void solve(){
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    int ans=0;
    mnMxSt l,r;
    for(int i:a){
        r.push_back(i);
        while(get_mx(l,r)-get_mn(l,r)>k){
            if(l.st.empty()) transfer(r,l);
            l.pop_back();
        }
        ans+=l.st.size()+r.st.size();
    }
    cout<<ans<<'\n';
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/