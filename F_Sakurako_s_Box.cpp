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
int fn(int b, int ex){
    if(ex==0) return 1;
    int k=fn(b, ex/2);
    k=(k*k)%m;
    if(ex&1) k=(k*b)%m;
    return k;
}
void solve() {
    int n,ans=0,sum=0;cin>>n;
    vi a(n);cin>>a;
    int k=(n*(n-1)/2)%m;
    for(int i:a){
        ans=(ans+sum*i)%m;
        sum=(sum+i)%m;
    }
    ans=(ans*fn(k,m-2))%m;
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/