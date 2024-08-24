#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

struct DSU{
    vi p,s;
    DSU(int n){
        p.assign(n,0);s.assign(n,1);
        for(int i=0; i<n; i++) p[i]=i;
    }
    int get(int n){
        return p[n]==n?n:p[n]=get(p[n]);
    }
    void uni(int a, int b){
        a=get(a),b=get(b);
        if(a==b) return;
        if(s[a]<s[b]) swap(a,b);
        p[b]=a;
        s[a]+=s[b];
    }
};
void solve(){
    int n,m,k;cin>>n>>m>>k;
    v<vi> b(m,vi(2));cin>>b;
    v<string> c(k),ans;
    for(int i=0; i<k; i++){
        string s;cin>>s;
        int x,y;cin>>x>>y;
        c[i]=s+to_string(x)+to_string(y);
    }
    DSU dsu(n+1);
    for(int i=k-1; i>=0; i--){
        int x=c[i][3]-'0';
        int y=c[i][4]-'0';
        if(c[i][0]=='a') ans.pb((dsu.get(x)==dsu.get(y))?"YES":"NO");
        else dsu.uni(x,y);
    }
    for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/