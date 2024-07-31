// https://codeforces.com/contest/1955/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define endr endl;return;
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vvi v<vi>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
v<bool> sieve(int n){v<bool> A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
int gcd(int a, int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,k,ans=0;cin>>n>>k;
    vi a(n);cin>>a;
    int i=0,j=n-1;
    bool f=1;
    f!=1;
    cout<<f;
    // while(k>0 && i<=j)
    // {
    //     if(f)
    //     {
    //         if(a[i]<=a[j])
    //         {
    //             if(k>=2*a[i]-1)
    //             {
    //                 k-=2*a[i]-1;
    //                 a[j]-=(a[i]-1);
    //                 i++;
    //                 f=!f;
    //             }
    //             else break;
    //         }
    //         else
    //         {
    //             if(k>=2*a[j])
    //             {
    //                 k-=2*a[j];
    //                 a[i]-=a[j];
    //                 j--;
    //             }
    //             else break;
    //         }
    //     }
    //     else
    //     {
    //         if(a[j]<=a[i])
    //         {
    //             if(k>=2*a[j]-1)
    //             {
    //                 k-=2*a[j]-1;
    //                 a[i]-=a[j]-1;
    //                 j--;
    //                 f=!f;
    //             }
    //             else 
    //                 break;
    //         }
    //         else
    //         {
    //             if(k>=2*a[i])
    //             {
    //                 k-=2*a[i];
    //                 a[j]-=a[i];
    //                 i++;
    //             }
    //             else 
    //                 break;
    //         }
    //     }
    // }
    // if(i==j && k>=a[i])
    // {
    //     cout << n << endr;
    // }
    // int fr = i-1;
    // int b = n-j;
    // cout << (fr+b) << endl;

}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
4 5
1 2 4 3
0 2 4 2
*/