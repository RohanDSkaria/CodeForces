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
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb primes(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n; cin>>n;
    string s;cin>>s;
    int p=0;
    int ans=0;
    for(int i=1; i<n-1; i++){
        if(s[i]=='@'){
            ans++;
            p=i;
        }
        else if(s[i]=='*'){
            if(s[i+1]=='*'){
                cout<<ans<<endl;
                return;
            }
            else p=i+1;
        }
        else p=i;
    }
    if(s[n-1]=='@') ans++;
    cout<<ans<<endl;
}
int main(){
    IOS
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
/*

*/