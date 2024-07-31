// https://codeforces.com/problemset/problem/907/A
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
int a,b,c,d;
bool check(int f, int m, int s){
    return (a>f || 2*a<f || b>m || 2*b<m || c>s || 2*c<s || d>s || 2*d<s || 2*d>=m)?0:1;
}
// bool check(int f, int m, int s){
//     return (a<=f && f<=2*a && b<=m && m<=2*b && c<=s && s<=2*c && d<=s && s<=2*d && m>2*d)?1:0;
// }
void solve(){
    cin>>a>>b>>c>>d;
    for(int f=1; f<=200; f++){
        for(int m=1; m<f; m++){
            for(int s=1; s<m; s++){
                if(check(f,m,s))  {cout<<f<<endl<<m<<endl<<s;return;}
            }
        }
    }
    cout<<-1;
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