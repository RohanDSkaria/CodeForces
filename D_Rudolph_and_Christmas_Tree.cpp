#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int double
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,d,h;cin>>n>>d>>h;
    vi a(n);cin>>a;
    int k=(d*h)/2,ans=0;
    for(int i=0; i<n-1; i++){
        if(a[i]+h>a[i+1]){
            int nh=a[i]+h-a[i+1];
            int ns=(nh*d)/h;
            ans+=(ns+d)*(a[i+1]-a[i])/2;
        }
        else ans+=k;
    }
    cout<<setprecision(20)<<ans+k<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/