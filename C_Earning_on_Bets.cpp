#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
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

int Gcd(auto a, auto b){return b?Gcd(b,a%b):a;}
int Lcm(auto a, auto b){return a/Gcd(a,b)*b;}
void solve(){
    int n,a=1,b=0;cin>>n;
    vi k(n);cin>>k;
    for(int i=0; i<n; i++) a=Lcm(a,k[i]);
    for(int i=0; i<n; i++) b+=a/k[i];
    if(b<a){
        for(int i=0; i<n; i++) cout<<a/k[i]<<" ";
        bl
    }
    else cout<<-1<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/