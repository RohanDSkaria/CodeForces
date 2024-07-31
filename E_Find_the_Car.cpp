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
#define p pair
#define pii p<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int fn(vi &a, int d){
    int s=0,e=a.size()-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]==d) return m;
        if(a[m]<d) s=m+1;
        else e=m-1;
    }
    return e;
}
void solve(){
    int n,k,q,d;cin>>n>>k>>q;
    vi a(k+1),b(k+1);
    for(int i=1; i<=k; i++) cin>>a[i];
    for(int i=1; i<=k; i++) cin>>b[i];
    while(q--){
        cin>>d;
        int i=fn(a,d);
        if(d-a[i]==0) cout<<b[i]<<" ";
        else cout<<b[i]+(d-a[i])*(b[i+1]-b[i])/(a[i+1]-a[i])<<" ";
    }
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
4 10
  se
*/