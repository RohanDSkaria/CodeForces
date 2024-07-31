#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int n,k;
vi a;
int cc(int b){
    int s=0,e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]<=b) s=m+1;
        else e=m-1;
    }
    return s;
}
void solve(){
    cin>>n>>k;
    a.assign(n,0);cin>>a;
    while(k--){
        int b;cin>>b;
        if(b<a[0]) cout<<0<<endl;
        else if(b>a[n-1]) cout<<n<<endl;
        else cout<<cc(b)<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/