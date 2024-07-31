// https://codeforces.com/contest/1955/problem/G
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
int gcd(int a, int b){return b?gcd(b,a%b):a;}

int n,m;
v<vi> a,dp;
vi dd(int r){
    vi d;int k=sqrt(r);
    for(int i=1; i*i<=r; ++i){
        if(r%i==0){
            d.pb(i);
            if(r/i!=i) d.pb(r/i);
        }
    }
    return d;
}
bool fn(int i, int j, int k){
    if(i==n || j==m) return 0;
    if((i==n-1) and (j==m-1)) return !(a[i][j]%k);
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=(!(a[i][j]%k) && (fn(i,j+1,k) || fn(i+1,j,k)));
}
bool cc(int k){
    dp.assign(n,vi(m,-1));
    return fn(0,0,k);
}
void solve(){
    cin>>n>>m;
    a.assign(n,vi(m));cin>>a;
    vi d=dd(gcd(a[0][0],a[n-1][m-1]));
    int k=d.size(),ans=-1;
    for(int i=0; i<k; i++) if(cc(d[i])) ans=max(ans,d[i]);
    cout<<ans<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/