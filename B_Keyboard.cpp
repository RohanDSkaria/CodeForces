// https://codeforces.com/contest/88/problem/B
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
#define vs v<string>
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

void solve(){
    int n,m,x,q,ans=0;cin>>n>>m>>x;
    vs a(n);cin>>a;
    cin>>q;
    string T;cin>>T;
    vb isL(26),isU(26);
    vpii sh;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='S') sh.pb(make_pair(i,j));
            else isL[a[i][j]-'a']=1;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]!='S'){
                for(auto k:sh){
                    if(pow(i-k.fi,2)+pow(j-k.se,2)<=x*x) isU[a[i][j]-'a']=1;
                }
            }
        }
    }
    for(char c:T){
        if(islower(c)){if(!isL[c-'a']){cout<<-1<<endl;return;}}
        else{
            if(sh.empty() || !isL[c-'A']){cout<<-1<<endl;return;}
            if(!isU[c-'A']) ans++;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/