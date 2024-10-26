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
    int n,r;cin>>n>>r;
    vi a(n);cin>>a;
    int ans=0,k=0;
    sort(all(a));
    for(int i=n-1; i>=0 && k<r; i--){
        if(a[i]<2) continue;
        ans+=a[i]-(a[i]&1);
        k+=a[i]/2;
        a[i]&=1;
    }
    int t=0;
    for(int i:a) if(i) t++;
    if(t>=2*(r-k)) t=0;
    else if(t>r-k) t=2*(r-k)-t;
    cout<<ans+t<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

1 1 3 3
1 1 1 1

1 1
2 2
1
1
1 1

*/