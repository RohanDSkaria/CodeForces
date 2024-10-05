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
int fn(int a, int n){
    if(n==1) return a;
    int k=fn(a,n/2);
    if(n&1) return (((k*k)%m)*a)%m;
    return (k*k)%m;
}
void solve(){
    int a,b,n,x;cin>>a>>b>>n>>x;
    if(a==1){
        cout<<(x+(b*(n%m))%m)%m<<endl;
        return;
    }
    int k=fn(a,n);
    cout<<((k*x)%m + (((b*(k-1))%m)*fn(a-1,m-2))%m)%m<<endl; 
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/