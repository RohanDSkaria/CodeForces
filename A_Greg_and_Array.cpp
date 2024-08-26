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

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vi a(n),b(n),d(m);cin>>a;
    v<vi> c(m,vi(3));cin>>c;
    for(int i=0; i<k; i++){
        int g,h;cin>>g>>h;
        d[g-1]+=1;
        if(h!=m) d[h]-=1;
    }
    b[c[0][0]-1]=d[0]*c[0][2];
    if(c[0][1]!=n) b[c[0][1]]=-d[0]*c[0][2];
    for(int i=1; i<m; i++){
        d[i]+=d[i-1];
        int g=d[i]*c[i][2];
        b[c[i][0]-1]+=g;
        if(c[i][1]!=n) b[c[i][1]]-=g;
    }
    a[0]+=b[0];
    for(int i=1; i<n; i++){
        b[i]+=b[i-1];
        a[i]+=b[i];
    }
    cout<<a<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/