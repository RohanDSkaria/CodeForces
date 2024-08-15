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

void solve(){
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    sort(all(a));
    int e=n-2;
    while(k && e>-1){
        if(a[e+1]-a[e]<=k){
            k-=a[e+1]-a[e];
            a[e]=a[e+1];
        }
        else{
            a[e]+=k;
            k=0;
        }
        e-=2;
    }
    int s=0,c=0,b=1;
    for(int i=n-1; i>=0; i--){
        if(b) s+=a[i],b=0;
        else c+=a[i],b=1;
    }
    cout<<s-c<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/