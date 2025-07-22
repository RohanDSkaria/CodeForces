// https://codeforces.com/problemset/problem/580/B
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
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb primes(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
// template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,d;cin>>n>>d;
    v<pll> A(n);
    for(int i=0; i<n; i++) cin>>A[i].fi>>A[i].se;
    sort(all(A));
    for(int i=1; i<n; i++) A[i].se=A[i].se+A[i-1].se;
    ll ans=0;
    for(int i=0; i<n; i++){
        int s=i,e=n-1;
        while(s<e){
            int m = s + (e-s+1)/2;
            if(A[m].fi<A[i].fi+d) s=m;
            else e=m-1;
        }
        ans=max(ans,i?A[s].se-A[i-1].se:A[s].se);
    }
    cout<<ans<<endl;
}
int main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
/*
0 100
75 5
75 1
150 20

0 7
11 32
46 8
87 54
99 10

1 100
5 200
9 300

5 9
2 10
8 5
18 12
1 1
*/