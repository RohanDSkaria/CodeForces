// https://codeforces.com/group/MWSDmqGsZm/contest/223338/problem/Y
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
#define mii map<int,int>
#define mll map<ll,ll>
#define mci map<char,int>
#define si set<int>
#define sll set<ll>
#define sc set<char>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
ll gcd(auto a, auto b){return b?gcd(b,a%b):a;}
ll lcm(auto a, auto b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

bool is(vi &a, vi &b){
    int c1=
}
bool check(vvi &a){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(!is(a[i],a[j])) return 0;
        }
    }
    return 1;
}
void solve(int t){
    int n;cin>>n;
    vvi a(n,vi(4));cin>>a;
    int x1=a[0][0],x2=a[0][2],y1=a[0][1],y2=a[0][3];
    for(int i=0; i<n; i++){
        x1=max(x1,a[i][0]);
        x2=min(x2,a[i][2]);
        y1=max(y1,a[i][1]);
        y2=min(y2,a[i][3]);
    }
    if(check(a)) cout<<"Case #"<<t<<": "<<abs((x1-x2)*(y1-y2))<<endl;
    else cout<<"Case #"<<t<<": "<<0<<endl;
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    cin>>t;
    // while(t--) solve();
    for(int i=1; i<=t; i++) solve(i);
}
/*
largest x1,y1 and smallest x2,y2
(x1-x2)*(y2-y1)
x1=0,y1=0,x2=2,y2=2;
2*2 = 4

**same diagonal**
*/