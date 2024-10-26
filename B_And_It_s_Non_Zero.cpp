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

int a[200001][32];
void fn(){
    for(int k=0; k<31; k++){
        int c=0;
        for(int i=1; i<=2e5; i++){
            a[i][k]=((i>>k)&1)?c:++c;
        }
    }
}
void solve(){
    int l,r;cin>>l>>r;
    int ans=INT_MAX;
    for(int k=0; k<31; k++){
        ans=min(ans,a[r][k]-a[l-1][k]);
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    memset(a,0,sizeof(a));
    fn();
    while(t--) solve();
}
/*

*/