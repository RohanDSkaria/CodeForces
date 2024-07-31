// https://codeforces.com/gym/505920/problem/E
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
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int main(){
    IOS
    int n;cin>>n;
    vl A(n);cin>>A;
    int t;cin>>t;
    vvi B(n,vi(32,0));
    for(int i=0; i<32; i++) B[0][i]=((A[0]>>(31-i))&1);
    for(int i=1; i<n; i++) for(int j=0; j<32; j++) B[i][j]=B[i-1][j]+((A[i]>>(31-j))&1);
    while(t--){
        int L,R;cin>>L>>R;L--;R--;
        int ans=A[L];
        for(int i=0; i<32; i++){
            if(L==0 && B[R][31-i]!=R+1) ans &= (~(1<<i));
            else if(L!=0 && B[R][31-i]-B[L-1][31-i] != R-L+1) ans &= (~(1<<i));
        }
        cout<<ans<<endl;
    }
}
/*

110101011

000000001
000000010
000000011
000000101
000000101

000000001
000000011
000000022
000000122
000000223
*/