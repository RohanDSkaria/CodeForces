#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

bool cc(v<vi> &a, int i, int j, vi &b){
    if(i>0){
        if(a[i][j]<=a[i-1][j]) return 0;
        else b.pb(a[i-1][j]);
    }
    if(i<a.size()-1){
        if(a[i][j]<=a[i+1][j]) return 0;
        else b.pb(a[i+1][j]);
    }
    if(j>0){
        if(a[i][j]<=a[i][j-1]) return 0;
        else b.pb(a[i][j-1]);
    }
    if(j<a[0].size()-1){
        if(a[i][j]<=a[i][j+1]) return 0;
        else b.pb(a[i][j+1]);
    }
    return 1;
}
void solve(){
    int n,m;cin>>n>>m;
    v<vi> a(n,vi(m));cin>>a;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            vi b;
            if(cc(a,i,j,b)) a[i][j]=*max_element(all(b));
        }
    }
    for(vi &i:a) cout<<i<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/