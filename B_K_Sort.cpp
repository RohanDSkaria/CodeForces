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
    int n,p=0,ans=0,k=0;cin>>n;
    vi a;
    for(int i=0; i<n; i++){
        int x;cin>>x;
        if(x<p) a.pb(p-x);
        else p=x;
    }
    sort(all(a));
    p=0;
    for(int i=a.size()-1; i>=0; i--){
        if(k+a[i]<p){
            ans+=(p-a[i]+k)*(i+1);
            k+=(p-a[i]-k);
        }
        else p=a[i];
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/