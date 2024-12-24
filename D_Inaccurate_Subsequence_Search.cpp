// https://codeforces.com/contest/1955/problem/D
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define endr endl;return;
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vvi v<vi>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
v<bool> sieve(int n){v<bool> A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
int gcd(int a, int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vi a(n);cin>>a;
    multiset<int> b,t,d;
    for(int i=0,c; i<m; i++){
        cin>>c;
        b.insert(c);
    }
    for(int i=0; i<m; i++){
        if(b.find(a[i])!=b.end()){
            b.erase(b.find(a[i]));
            t.insert(a[i]);
        }
        else d.insert(a[i]);
    }
    int ans=(t.size()>=k);
    for(int i=m; i<n; i++){
        if(d.find(a[i-m])!=d.end()) d.erase(d.find(a[i-m]));
        else if(t.find(a[i-m])!=t.end()){
            t.erase(t.find(a[i-m]));
            b.insert(a[i-m]);
        }
        if(b.find(a[i])!=b.end()){
            b.erase(b.find(a[i]));
            t.insert(a[i]);
        }
        else d.insert(a[i]);
        if(t.size()>=k) ans++;
    }
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