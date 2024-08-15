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
    int n,s,m;cin>>n>>s>>m;
    v<pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(all(a));
    if(s<=a[0].first){cout<<"YES"<<endl;return;}
    for(int i=1; i<n; i++){
        if(a[i].first-a[i-1].second>=s){cout<<"YES"<<endl;return;}
    }
    if(s<=m-a[n-1].second){cout<<"YES"<<endl;return;}
    cout<<"NO"<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/