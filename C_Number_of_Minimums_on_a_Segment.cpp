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
        T idn;
        int n;
        segtree(int n, T idn){
            this->n=n;
            this->idn=idn;
            t.assign(4*n,idn);
        }
        T merge(T a, T b){

        }
        T query(){

        }
        void set(int i, T val){
            function<void(int,int,int)> f=[&](int ti, int tl, int tr){
                if(tl==tr){
                    t[ti]=val;
                    return;
                }
                int m=(tl+tr)/2;
                if(i<=m) f(2*ti+1,tl,m);
                else f(2*ti+2,m+1,tr);
                t[ti]=merge(t[2*ti+1],t[2*ti+2]);
            }
            f(0,0,n-1);
        }
};
void solve(){
    
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/