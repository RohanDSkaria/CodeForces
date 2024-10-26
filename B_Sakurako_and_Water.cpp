#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    v<vi> a(n,vi(n));cin>>a;
    vi b;
    for(int i=n-1; i>=0; i--){
        int j=0,k=i,mi=a[k][j];
        while(k<n){
            mi=min(mi,a[k][j]);
            k++;
            j++;
        }
        b.pb(mi);
    }
    for(int j=1; j<n; j++){
        int i=0,k=j,mi=a[i][k];
        while(k<n){
            mi=min(mi,a[i][k]);
            k++;
            i++;
        }
        b.pb(mi);
    }
    int ans=0;
    for(int i:b) if(i<0) ans+=abs(i);
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/