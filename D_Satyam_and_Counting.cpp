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
    int n,ans=0;cin>>n;
    set<int> a,b;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        if(y==0) a.insert(x);
        else b.insert(x);
    }
    for(int i:a) if(b.count(i)) ans+=(n-2);
    for(int i:a) if(b.count(i-1) && b.count(i+1)) ans++;
    for(int i:b) if(a.count(i-1) && a.count(i+1)) ans++;
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/