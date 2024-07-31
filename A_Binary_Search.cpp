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
bool cc(int b){
    int s=0,e=n-1;
    while(s<=e){
        int m=s + (e-s)/2;
        if(a[m]==b) return 1;
        if(a[m]>b) e=m-1;
        else s=m+1;
    }
    return 0;
}
void solve(){
    cin>>n>>k;
    a.assign(n,0);cin>>a;
    while(k--){
        int b;cin>>b;
        // cout<<b;
        if(cc(b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/