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
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    sort(all(a));
    if(k==a[0]){
        cout<<1<<endl;
        return;
    }
    int ans=0,c=0,cc=0;
    for(int i=0; i<n-1; i++){
        if(ans+((a[i]-c)*(n-i))>k){
            while(ans+a[i]-c+cc<k) ans+=(a[i]-c)+1;
            if(ans<k) ans+=a[i]-c;
            if(ans<k) cc++;
            break;
        }
        ans+=(a[i]-c)*(n-i);
        if(ans+cc>=k) break;
        cc++;
        c=a[i];
    }
    cout<<ans+cc<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
1 2 3
0 1 2
*/