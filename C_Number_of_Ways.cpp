// https://codeforces.com/problemset/problem/466/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" => "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define n0 {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    for(int i=1; i<n; i++) a[i]+=a[i-1];
    if(a[n-1]%3){cout<<0<<endl;return;}
    int cnt=0,ans=0;
    for(int i:a){
        if(i==(2*a[n-1]/3)) ans+=cnt;
        if(i==a[n-1]/3) cnt++;
    }
    if(a[n-1]==0) ans-=count(all(a),0)-1;
    cout<<ans<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/