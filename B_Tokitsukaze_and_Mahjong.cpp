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

void fn(string a, v<string> &s,v<string> &m,v<string> &p){
    if(a[1]=='m') m.pb(a);
    else if(a[1]=='s') s.pb(a);
    else p.pb(a);
}
void solve(){
    string a,b,c;cin>>a>>b>>c;
    int allsame=(a==b?(2+(a==c)):(a==c?2:(b==c?2:1)));
    if(allsame>1){
        cout<<3-allsame<<endl;
        return;
    }
    // v<pair<int,char>> d(3);
    // d[0].first=a[0]-'0';
    // d[0].second=a[1];
    // d[1].first=b[0]-'0';
    // d[1].second=b[1];
    // d[2].first=c[0]-'0';
    // d[2].second=c[1];
    // sort(all(d));
    // if(d[1].first-1==d[0].first){
    //     if(d[2].first-1==d[1].first){
    //         if(d[0].second==d[1].second && d[1].second==d[2].second) cout<<0<<endl;
    //         else if(d[0].second==d[1].second || d[1].second==d[2].second) cout<<1<<endl;
    //         else cout<<2<<endl;
    //     }
    //     else if(d[0].second==d[1].second) cout<<1<<endl;
    //     else cout<<2<<endl;
    // }
    // else if(d[2].first-1==d[1].first){
    //     if(d[2].second==d[1].second) cout<<1<<endl;
    //     else cout<<2<<endl;
    // }
    // else if(d[0].first+2==d[1].first){
    //     if(d[0].second==d[1].second) cout<<1<<endl;
    //     else if(d[1].first+2==d[2].first){
    //         if(d[2].second==d[1].second) cout<<1<<endl;
    //         else cout<<2<<endl;
    //     }
    //     else cout<<2<<endl;
    // }
    // else if(d[1].first+2==d[2].first){
    //     if(d[2].second==d[1].second) cout<<1<<endl;
    //     else cout<<2<<endl;
    // }
    // else cout<<2<<endl;
    v<string> s,m,p;
    fn(a,s,m,p);
    fn(b,s,m,p);
    fn(c,s,m,p);
    sort(all(s));
    sort(all(m));
    sort(all(p));
    if(s.size()==3){
        if((s[0][0]-'0')+1==s[1][0]-'0' && (s[1][0]-'0')+1==s[2][0]-'0'){
            cout<<0<<endl;
            return;
        }
    }
    if(m.size()==3){
        if((m[0][0]-'0')+1==m[1][0]-'0' && (m[1][0]-'0')+1==m[2][0]-'0'){
            cout<<0<<endl;
            return;
        }
    }
    if(p.size()==3){
        if((p[0][0]-'0')+1==p[1][0]-'0' && (p[1][0]-'0')+1==p[2][0]-'0'){
            cout<<0<<endl;
            return;
        }
    }
    if(s.size()>=2){
        if(s[0][0]-'0'>=(s[1][0]-'0')-2 || (s.size()==3 && s[1][0]-'0'>=(s[2][0]-'0')-2)) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else if(m.size()>=2){
        if(m[0][0]-'0'>=(m[1][0]-'0')-2 || (m.size()==3 && m[1][0]-'0'>=(m[2][0]-'0')-2)) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else if(p.size()>=2){
        if(p[0][0]-'0'>=(p[1][0]-'0')-2 || (p.size()==3 && p[1][0]-'0'>=(p[2][0]-'0')-2)) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else cout<<2<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/