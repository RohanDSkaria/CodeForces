// https://codeforces.com/problemset/problem/1490/E
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vll v<ll>
#define vb v<bool>
#define vs v<string>
#define vc v<char>
#define vvi v<vi>
#define vvll v<vll>
#define vvc v<vc>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " : " << x << endl;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii v<pii>
#define vpll v<pll>
#define fi first
#define se second
#define um unordered_map
#define us unordered_set
#define usi us<int>
#define usll us<ll>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
map<ll,ll> dp;
ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
vll pre;
bool check(int m, vi& a, int n){
    ll cnt=pre[m];
    for(int i=m+1; i<n; i++){
        if(cnt>=a[i]) cnt+=a[i];
        else return 0;
    }
    return 1;
}
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    um<int,int> map;
    for(int i=0; i<n; i++) map[i+1]=a[i];
    sort(all(a));
    pre.resize(n);pre[0]=a[0];
    for(int i=1; i<n; i++) pre[i]=pre[i-1]+a[i];
    int s=0,e=n-1;
    while(s<=e){
        int m = s+(e-s)/2;
        if(check(m,a,n)) e=m-1;
        else s=m+1;
    }
    // ans=n-s;
    cout<<n-s<<endl;
    vi B;
    for(auto& i : map){
        if(i.se>=a[s]) B.pb(i.fi);
    }
    sort(all(B));
    cout<<B<<endl;
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/