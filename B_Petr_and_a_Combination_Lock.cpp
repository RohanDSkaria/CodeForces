// https://codeforces.com/contest/1097/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vl v<ll>
#define vb v<bool>
#define vs v<string>
#define vc v<char>
#define vvi v<v<int>>
#define vvl v<v<ll>>
#define bl cout<<endl
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " : " << x << endl;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define um unordered_map
#define us unordered_set
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
map<ll,ll> dp;
ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,k;cin>>n;k=1<<n;
    vi A(n);cin>>A;
    for(int i=0; i<k; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(i&(1<<j)) sum-=A[n-1-j];
            else sum+=A[n-1-j];
        }
        if(sum%360==0) {cout<<"YES"<<endl;return;}
    }
    cout<<"NO"<<endl;
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
/*
10 20 30
c  c  c
c  c  a
c  a  c
c  a  a
a  c  c
a  c  a
a  a  c
a  a  a
*/