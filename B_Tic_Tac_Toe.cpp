// https://codeforces.com/contest/907/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl    '\n'
#define IOS     ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll      long long
#define pb(a)   push_back(a)
#define v       vector
#define vi      v<int>
#define vll     v<ll>
#define vb      v<bool>
#define vs      v<string>
#define vc      v<char>
#define vvi     v<vi>
#define vvll    v<vll>
#define vvc     v<vc>
#define bl      cout<<endl;
#define all(a)  a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x)  cout << #x << " : " << x << endl;
#define pii     pair<int,int>
#define pll     pair<ll,ll>
#define vpii    v<pii>
#define vpll    v<pll>
#define fi      first
#define se      second
#define um      unordered_map
#define us      unordered_set
#define usi     us<int>
#define usll    us<ll>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    vvc A(9, vc(9));cin>>A;
    int x,y,cnt=0;cin>>x>>y;
    int s=x%3,e=y%3;
    if(s==0) s=7;
    if(s==2) s=4;
    if(e==2) e=4;
    if(e==0) e=7;
    for(int i=s-1; i<s+2; i++){
        for(int j=e-1; j<e+2; j++){
            if((int)(A[i][j])==46){
                A[i][j]='!';
                cnt++;
            }
        }
    }
    if(cnt==0){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++) if((int)(A[i][j])==46) A[i][j]='!';
        }
    }
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<A[i][j];
            if((j+1)%3==0) cout<<" ";
        }
        bl
        if((i+1)%3==0) bl
    }
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/