#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,t;cin>>n>>t;
    vi a(n);cin>>a;
    if(n==1){
        cout<<((a[0]>t)?(0):(1))<<endl;
        return;
    }
    int c=0,s=0,ans=-1,i,p=0;
    for(i=0; i<n;){
        if(c+a[i]>t){
            ans=max(ans,i-s);
            s=i-1;c=a[i-1];
            if(s==p) s=p=i,c=a[i],i++;
        }
        else c+=a[i],i++;
    }
    cout<<max(ans,i-s)<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
3 1 2 1
3 1 = 2
1 2 1 = 3

2 2 3


3 4 6 7
3 1 3 4

1 3 4 2 8 6 3 7 2

*/