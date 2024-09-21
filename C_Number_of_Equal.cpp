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
    int n,m;cin>>n>>m;
    vi a(n),b(m);cin>>a>>b;
    int p=0,q=0,c=0;
    while(p<n && q<m){
        if(a[p]==b[q]){
            int t1=0,t2=0;
            while(p<n && q<m && a[p]==b[q]) p++,t1++;
            while(p<=n && q<m && b[q]==a[p-1]) q++,t2++;
            c+=t1*t2;
        }
        else if(a[p]>b[q]) q++;
        else p++;
    }
    cout<<c<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/