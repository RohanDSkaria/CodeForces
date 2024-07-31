// https://codeforces.com/problemset/problem/837/B
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
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
set<int> dp;
bool checkH(v<vc>& A,int h, int m){
    char c=A[0][0];
    dp.erase((int)c);
    for(int i=0; i<h; i++) for(int j=0; j<m; j++) if(A[i][j]!=c) return 0;
    c=A[h][0];
    if(dp.find(c)==dp.end()) return 0;
    dp.erase((int)c);
    for(int i=h; i<2*h; i++) for(int j=0; j<m; j++) if(A[i][j]!=c) return 0;
    c=A[2*h][0];
    if(dp.find(c)==dp.end()) return 0;
    for(int i=2*h; i<3*h; i++) for(int j=0; j<m; j++) if(A[i][j]!=c) return 0;
    return 1;
}
bool checkW(v<vc>& A,int w, int n){
    char c=A[0][0];
    dp.erase((int)c);
    for(int j=0; j<w; j++) for(int i=0; i<n; i++) if(A[i][j]!=c) return 0;
    c=A[0][w];
    if(dp.find(c)==dp.end()) return 0;
    dp.erase((int)c);
    for(int j=w; j<2*w; j++) for(int i=0; i<n; i++) if(A[i][j]!=c) return 0;
    c=A[0][2*w];
    if(dp.find(c)==dp.end()) return 0;
    for(int j=2*w; j<3*w; j++) for(int i=0; i<n; i++) if(A[i][j]!=c) return 0;
    return 1;
}
void solve(){
    int n,m;cin>>n>>m;
    v<vc> A(n,vc(m));cin>>A;
    int h=-1,w=-1;
    char c=A[0][0];
    for(int i=0; i<m; i++) if(A[0][i]!=c) {h=n,w=i;break;}
    if(h==-1){
        w=m;
        for(int i=0; i<n; i++) if(A[i][0]!=c) {h=i;break;}
    }
    if(h!=n && h*3!=n) {cout<<"NO"<<endl;return;}
    if(w!=m && w*3!=m) {cout<<"NO"<<endl;return;}
    if(w==m){
        if(checkH(A,h,m)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(checkW(A,w,n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    dp={71,82,66};
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}
/*

*/