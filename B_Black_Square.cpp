// https://codeforces.com/problemset/problem/828/B
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
    int n,m;cin>>n>>m;
    v<vc> A(n,vc(m)); cin>>A;
    int r1=INT_MAX,r2=INT_MIN,c1=INT_MAX,c2=INT_MIN,cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]=='B'){
                r1=min(r1,i);
                r2=max(r2,i);
                c1=min(c1,j);
                c2=max(c2,j);
                cnt++;
            }
        }
    }
    if(r1==INT_MAX){cout<<1<<endl;return;}
    // cout<<r1<<" "<<r2<<" "<<c1<<" "<<c2<<" "<<endl;
    int s=max(r2-r1,c2-c1)+1;
    cout<<((s>min(n,m))?-1:s*s-cnt)<<endl;
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

*/