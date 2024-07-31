#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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

int n,k;
vi a;
int cc(int b){
    int s=0,e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]<=b) s=m+1;
        else e=m-1;
    }
    return s;
}
int ck(int b){
    int s=0,e=n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]<b) s=m+1;
        else e=m-1;
    }
    return s;
}
void solve(){
    // cin>>n;
    // a.assign(n,0);cin>>a>>k;
    // sort(all(a));
    // while(k--){
    //     int b,c;cin>>b>>c;
    //     b=cc(b);c=ck(c);
    //     deb(b)deb(c)
    //     // cout<<c-b-1<<" ";
    // }
    int a=1,k=496;
    for(int i=0; i<6; i++){
        a+=k;
        k*=496;
    }
    cout<<(a==14919921443713777)<<endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
1 3 4 10 10
*/