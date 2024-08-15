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
    int n,ans=0,ya=1;cin>>n;
    vi a(n);cin>>a;
    map<int,int> m,mp;
    ans+=a[0];m[a[0]]=1;a[0]=0;
    for(int i=1; i<n; i++){
        ans+=a[i];
        m[a[i]]++;
        if(!(m[a[i]]>1 && a[i-1]<a[i])) a[i]=a[i-1];
        ans+=a[i];
    }
    for(int i=1; i<n; i++){
        mp[a[i]]++;
        if(!(mp[a[i]]>1 && a[i-1]<a[i])) a[i]=a[i-1];
    }
    for(int i=1; i<n; i++) ans+=(n-i)*a[i];
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
2 2 3

2 2 1
0 2 2

*/