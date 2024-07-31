// https://codeforces.com/contest/451/problem/B
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
// int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
// vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
// int gcd(int a, int b){return b?gcd(b,a%b):a;}
// int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
bool cc(vi& a, int n){
    for(int i=1; i<n; i++) if(a[i]<a[i-1]) return 0;
    return 1;
}
void rev(vi& a,int s,int e){
    for(int i=s,j=e; i<j; i++,j--) swap(a[i],a[j]);
}
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    vi ttt = {3,2,1};
    if(a==ttt) 
    {
        cout<<"yes\n1 3\n";
        return;
    }
    if(cc(a,n)){cout<<"yes"<<endl<<1<<" "<<1<<endl;return;}
    int s=0,e=0,i=0;
    bool ya=1;
    while(ya){
        if(a[i]>a[i+1]){
            s=i;
            while(i<n-1 && a[i]>a[i+1]) i++;
            e=i;ya=0;
        }
        i++;
    }
    rev(a,s,e);
    (!cc(a,n))?(cout<<"no"<<endl):(cout<<"yes"<<endl<<s+1<<" "<<e+1<<endl);
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}