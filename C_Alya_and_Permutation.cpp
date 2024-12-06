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
    int n,k=0,m=-1;cin>>n;
    // vi a(n);
    // for(int i=0; i<n; i++) a[i]=i+1;
    // do{
    //     for(int i=0; i<n; i++){
    //         if(i&1) k|=a[i];
    //         else k&=a[i];
    //     }
    //     // deb(k)
    //     m=max(m,k);
    //     // if(k==){
    //     //     deb(a)
    //     //     return;
    //     // }
    //     k=0;
    // } while(next_permutation(all(a)));
    // k=0;
    // // // deb(m)
    // do{
    //     for(int i=0; i<n; i++){
    //         if(i&1) k|=a[i];
    //         else k&=a[i];
    //     }
    //     // deb(k)
    //     // m=max(m,k);
    //     if(k==n){
    //         deb(a)
    //         return;
    //     }
    //     k=0;
    // } while(next_permutation(all(a)));
    // deb(m)
    vi a,b,c;
    for(int i=1; i<=n; i++){
        if((i&(i+1))==0){
            a.pb(i);
            i++;
            if(i<=n) a.pb(i);
        }
        else b.pb(i);
    }
    deb(a)deb(b)
    if(n&1){
        for(int i=1; i<=n; i++) c.pb(i);
        swap(c[n-4],c[n-5]);
    }
    else{
        for(int i=b.size()-1; i>=0; i--) c.pb(b[i]);
        for(int i=0; i<a.size(); i++) c.pb(a[i]); 
    }
    for(int i=0; i<n; i++){
        if(i&1) k|=c[i];
        else k&=c[i];
    }
    cout<<k<<endl;
    cout<<c<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/