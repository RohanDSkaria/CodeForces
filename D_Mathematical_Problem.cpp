// https://codeforces.com/contest/1916/problem/D
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

void solve(){
    int n;cin>>n;
    if(n==1){cout<<'1'<<endl;return;}
    cout<<"169"; for(int i=0; i<n-3; i++) cout<<'0';bl
    cout<<"196"; for(int i=0; i<n-3; i++) cout<<'0';bl
    cout<<"961"; for(int i=0; i<n-3; i++) cout<<'0';bl
    for(int i=1; i<=n/2-1; i++){
        cout<<'1'; for(int j=0; j<i; j++) cout<<'0'; cout<<'6'; for(int j=0; j<i; j++) cout<<'0'; cout<<'9'; for(int j=0; j<n-(2*i+3); j++) cout<<'0';bl
        cout<<'9'; for(int j=0; j<i; j++) cout<<'0'; cout<<'6'; for(int j=0; j<i; j++) cout<<'0'; cout<<'1'; for(int j=0; j<n-(2*i+3); j++) cout<<'0';bl
    }
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
13 = 169
14 = 196
31 = 961

16900 130
19600 140
96100 310
10609 103
90601 301

1690000
1960000
9610000
1060900
9060100
1006009
9006001

169000000
196000000
961000000
106090000
906010000
100600900
900600100
100060009
900060001

169(n-3)0
196(n-3)0
961(n-3)0
1 -1
3 0
5 1
7 2
9 3
11 4
13 5
15 (15 - 15/2 + 2)()
x y
y = (x-1)/2 - 1
y = x/2 - 1/2 - 1
y = x/2 - 1
*/