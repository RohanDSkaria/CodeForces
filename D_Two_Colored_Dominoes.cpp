// https://codeforces.com/contest/1863/problem/D
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
#define vvi v<vi>
#define vvc v<vc>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " = " << x << endl;
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

cc(vvc& a, int& n, int& m){
    for(int j=0; j<m; j++){
        int cnt=0;
        for(int i=0; i<n; i++) if(a[i][j]!='.') cnt++;
        if(cnt&1) return 1;
    }
    return 0;
}
cr(vvc& a, int& n, int& m){
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<m; j++) if(a[i][j]!='.') cnt++;
        if(cnt&1) return 1;
    }
    return 0;
}
void solve(){
    int n,m;cin>>n>>m;
    vvc a(n, vc(m));cin>>a;
    if(cr(a,n,m) || cc(a,n,m)){cout<<-1<<endl;return;}
    vvc ans(n, vc(m));
    for(int i=0; i<n; i++){
        bool ya=1;
        for(int j=0; j<m; j++){
            if(a[i][j]=='.') ans[i][j]='.';
            // else if(a[i][j]=='L') ans[i][j]='W',ans[i][j+1]='B';
            else if(a[i][j]=='U'){
                if(ya){
                    ans[i][j]='W',ans[i+1][j]='B';
                    ya=!ya;
                }
                else{
                    ans[i][j]='B',ans[i+1][j]='W';
                    ya=!ya;
                }
            }
        }
    }
    for(int j=0; j<m; j++){
        bool ya=1;
        for(int i=0; i<n; i++){
            if(a[i][j]=='L'){
                if(ya){
                    ans[i][j]='W',ans[i][j+1]='B';
                    ya=!ya;
                }
                else{
                    ans[i][j]='B',ans[i][j+1]='W';
                    ya=!ya;
                }
            }
        }
    }
    for(int i=0; i<n; i++){for(int j=0; j<m; j++)cout<<ans[i][j];bl}
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/