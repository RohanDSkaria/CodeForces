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

const int m=1e9+7;
vi fact;
int fn(int n, int k){
    int sum=0;
    int g = n-k;
    for(int i=0; i<k; i++){
        sum=(sum+(g*fact[n-2-i])%m)%m;
        g=(g*(k-1-i))%m;
    }
    return sum;
}
void solve(){
    int n;cin>>n;
    vi a(n+1);a[0]=0;
    for(int i=1; i<n+1; i++) cin>>a[i];
    sort(all(a));
    fact.assign(n+1,1);
    for(int i=2; i<n+1; i++) fact[i]=(i*fact[i-1])%m;
    int ans=0;
    for(int i=1; i<n+1; i++) ans+=(fn(n,i)*a[i])%m;
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/