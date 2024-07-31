// https://codeforces.com/contest/1898/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
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

void print(v<v<char>>& a){
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a[0].size(); j++) cout<<a[i][j]<<" ";
        bl
    }
}
void solve(){
    int n,m,k;cin>>n>>m>>k;
    v<char> c(2);c[0]='R';c[1]='B';
    if(k<(n+m-2) || (k-m+n)&1) {cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
    v<v<char>> a(n-1, v<char>(m));
    v<v<char>> b(n, v<char>(m-1));
    for(int i=0; i<n-1; i++) a[i][0]=c[i&1];
    for(int i=0; i<m-1; i++) b[n-1][i]=c[(i+n-1)&1];
    for(int i=0; i<n-1; i++)
        for(int j=1; j<m; j++)
            a[i][j]='R';
    for(int i=0; i<n-1; i++)
        for(int j=0; j<m-1; j++)
            b[i][j]='R';
    a[n-2][m-1]=b[n-1][m-2];
    a[n-2][m-2]=b[n-1][m-2];
    b[0][0]='B';b[1][0]='B';
    b[n-2][m-2]=b[n-1][m-3];
    print(b);print(a);
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/