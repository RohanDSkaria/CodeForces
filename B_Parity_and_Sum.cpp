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
    int n;cin>>n;
    vi a(n);cin>>a;
    int ans=0,k=0,m=-1;
    for(int i:a) if(i&1) ans++,m=max(m,i);
    ans=n-ans;
    if(ans==n || ans==0) {cout<<0<<endl;return;}
    sort(all(a));
    bool ya=0;
    for(int i:a){
        if(!(i&1)){
            if(m<i){
                ya=1;
                break;
            }
            else m+=i;
        }
    }
    if(ya) cout<<ans+1<<endl;
    else cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*



*/