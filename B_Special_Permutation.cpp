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
    int n,a,b;cin>>n>>a>>b;
    int k=n/2-1;
    if((a>k+1 || b<k+2) && !(a==k+2 && b==k+1)){cout<<"-1\n";return;}
    for(int i=0,t=n; i<k; i++){
        if(t==b) t--;
        cout<<t--<<" ";
    }
    cout<<a<<" ";
    for(int i=k+1,t=1; i<n-1; i++){
        if(t==a) t++;
        cout<<t++<<" ";
    }
    cout<<b<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/