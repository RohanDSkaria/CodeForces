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
    int p1,p2,pn;
    for(int i=0; i<n; i++){
        if(a[i]==1) p1=i+1;
        else if(a[i]==2) p2=i+1;
        else if(a[i]==n) pn=i+1;
    }
    if(p1<p2){
        if(p2<pn) cout<<p2<<" "<<pn;
        else if(pn<p1) cout<<p1<<" "<<pn;
        else cout<<"1 1";
    }
    else{
        if(p1<pn) cout<<p1<<" "<<pn;
        else if(pn<p2) cout<<p2<<" "<<pn;
        else cout<<"1 1";
    }
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/