// https://codeforces.com/contest/1292/problem/A
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vb v<bool>
#define vc v<char>
#define vs v<string>
#define vvi v<vi>
#define vvc v<vc>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define vpii v<pii>
#define fi first
#define se second
#define mii map<int,int>
#define mci map<char,int>
#define si set<int>
#define sc set<char>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
int gcd(int a, int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,q;cin>>n>>q;
    vi m(n,3);
    int k=0;
    while(q--){
        int r,c;cin>>r>>c;
        r--;c--;
        if(c>0) k-=((m[c-1]&m[c])==0);
        if(c<n-1) k-=((m[c+1]&m[c])==0);
        m[c]^=(1<<r);
        if(c>0) k+=((m[c-1]&m[c])==0);
        if (c < n - 1) k+=((m[c+1]&m[c])==0);
        cout<<(k==0?"Yes":"No")<<endl;
    }
}
// void solve(){
//     int n,k,l;cin>>n>>k>>l;
//     string s="";
//     int g=n,c=0;
//     while(k*g+c!=n){
//         int h=k*g+c;
//         s=to_string(h%10)+s;
//         c=h/10;
//         g=h%10;
//     }
//     s+=to_string(n);
//     cout<<s<<endl;
// }
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/