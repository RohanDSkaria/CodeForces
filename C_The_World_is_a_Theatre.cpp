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
int ncr(int n, int r){
    if(r>n) return 0;
    int ans=1;
    for(int i=0; i<r; i++){
        ans*=n-i;
        ans/=i+1;
    }
    return ans;
}
void solve(){
    int a,b,t;cin>>a>>b>>t;
    int tot=ncr(a+b,t);
    int k=ncr(a,t)+ncr(b,t);
    for(int i=1; i<4; i++) k+=ncr(a,i)*ncr(b,t-i);
    cout<<tot-k;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/