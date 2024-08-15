#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

const int MOD = 1e9+7;
const int MAX = 100001;
int fact[MAX];

void pp(){
    fact[0]=1;
    for(int i=1; i<MAX; i++) {
        fact[i] = (fact[i-1]*i)%MOD;
    }
}
int pow(int b, int e){
    int ans=1;
    while(e>0){
        if(e&1) ans=(ans*b)%MOD;
        b=(b*b)%MOD;
        e/=2;
    }
    return ans;
}
int ff(int n, int r) {
    if(r<0 || n<0 || n<r) return 0;
    int num = fact[n];
    int denom = (fact[r] * fact[n-r]) % MOD;
    return (num * pow(denom, MOD-2)) % MOD;
}
void solve(){
    int n,k;cin>>n>>k;
    vi a(n);
    vi pre(n+1);
    for(int i=0; i<n; i++){
        cin>>a[i];
        pre[i+1]=pre[i]+a[i];
    }
    int mid = k/2,ans=0,z=n-pre[n];
    for(int i=0; i<n; i++){
        if(a[i]==1){
            int p=z+pre[i],po=pre[n]-pre[i+1];
            int val=(ff(p,mid)*ff(po,mid))%MOD;
            ans=(ans+val)%MOD;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    pp();
    while(t--) solve();
}
/*

*/