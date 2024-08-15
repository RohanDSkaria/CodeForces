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

template<typename T>
class segtree{
    public:
        v<T> t;
        int n;
        T idn;
        segtree(int n,T idn){
            this->n=n;
            this->idn=idn;
            t.assign(4*n,idn);
        }
        T merge(T a, T b){
            return min(a,b);
        }
        T query(int l,int r){
            function<T(int,int,int)> f=[&](int tid,int tl,int tr)->T
            {
                if(l>tr || r<tl) return idn;
                if(l<=tl && r>=tr) return t[tid];
                int tm=(tl+tr)/2;
                return merge(f(2*tid+1,tl,tm),f(2*tid+2,tm+1,tr));
            };
            return f(0,0,n-1);
        }
        void set(int id,T val){
            function<void(int,int,int)> f=[&](int tid,int tl,int tr){
                if(tl==tr){
                    t[tid]=val;
                    return;
                }
                int tm=(tl+tr)/2;
                if(id<=tm) f(2*tid+1,tl,tm);
                else f(2*tid+2,tm+1,tr);
                t[tid]=merge(t[2*tid+1],t[2*tid+2]);
            };
            f(0,0,n-1);
        }
};

void solve(){
    int n,m;cin>>n>>m;
    segtree<int> st(n,INT_MAX);
    for(int i=0; i<n; i++){
        int v;cin>>v;
        st.set(i,v);
    }
    while(m--){
        int k,b,c;cin>>k>>b>>c;
        if(k==1) st.set(b,c);
        else cout<<st.query(b,c-1)<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/