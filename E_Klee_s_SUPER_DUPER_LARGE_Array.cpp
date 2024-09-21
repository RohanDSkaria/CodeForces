#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.e()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve() {
    int n,k;cin>>n>>k;
    int ans=(n+k)*(n+k-1)/2;
    int s=k,e=n+k-1;
    while(s<=e){
        int m=s+(e-s)/2;
        int p=(k-1)*k/2;
        int sum=m*(m+1)/2-p;
        int a = (n+k)*(n+k-1)/2 - 2*sum-p;
        int b = abs(a);
        if(b<ans) ans=b;
        if(a<0) e=m-1;
        else s=m+1;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/