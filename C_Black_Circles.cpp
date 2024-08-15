#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define double long double
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    v<vi> a(n,vi(2));cin>>a;
    // cout<<fixed<<setprecision(20);
    int x,y,p,q;cin>>x>>y>>p>>q;
    double one = (x-p)*(x-p),two=(y-q)*(y-q);
    double m=numeric_limits<double>::max(),req=sqrt(one+two);
    // deb(req)
    for(auto i:a){
        double thr=(i[0]-p)*(i[0]-p),fou=(i[1]-q)*(i[1]-q);
        double k=sqrt(thr+fou);
        // deb(k)
        m=min(m,k);
    }
    if(req<m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/