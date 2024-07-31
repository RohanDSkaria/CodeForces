// https://codeforces.com/problemset/problem/1516/B
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
#define vvi v<v<int>>
#define vvl v<v<ll>>
#define bl cout<<endl
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
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    vi A(n);cin>>A;
    vi B(n); B[0]=A[0];
    for(int i=1; i<n; i++) B[i]=B[i-1]^A[i];
    for(int i=0; i<n; i++){
        int c=B[i],t=0;
        bool ya = 0;
        for(int j=i+1; j<n; j++){
            t^=A[j];
            if(t==c){
                ya=1;
                t=0;
            }
        }
        if(t==0 && ya){cout<<"YES"<<endl;return;}
    }
    cout<<"NO"<<endl;
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
a b c d e f r g
a a^b a^b^c a^b^c^d a^b^c^d^e a^b^c^d^e^f 
*/