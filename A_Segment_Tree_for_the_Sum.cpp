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

struct segtree{
    vi a;
    void init(int n){
        a.assign(n,0LL);
    }
    void set(int i, int v, int x, int l, int r){
        if(r-l==1){
            a[x]=v;
            return;
        }
        int m=l+(r-l)/2;
        if(i<m) set(i,v,2*x+1,l,m);
        else set(i,v,2*x+2,m,r);
        a[x]=a[2*x+1]+a[2*x+2];
    }
    int sum(int b, int c, int x, int l, int r){
        if(l>=c || b>=r) return 0;
        if(l>=b && r<=c) return a[x];
        int m=l+(r-l)/2;
        return sum(b,c,2*x+1,l,m)+sum(b,c,2*x+2,m,r);
    }
};

void solve(){
    int n,m,size=1;cin>>n>>m;
    while(size<n) size*=2;
    size*=2;
    segtree st;
    st.init(size);
    // size/=2;
    for(int i=0; i<n; i++){
        int v;cin>>v;
        st.set(i,v,0,0,n);
    }
    while(m--){
        int k,b,c;cin>>k>>b>>c;
        if(k==1) st.set(b,c,0,0,n);
        else cout<<st.sum(b,c,0,0,n)<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/