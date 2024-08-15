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

bool fn(int n){
    vi a;
    while(n){
        a.pb(n%10);
        n/=10;
    }
    if(a.size()<3) return 0;
    for(int i=a.size()-1; i>1; i--){
        if(a[i]==1 && a[i-1]==0){
            if(a[i-2]>1) return 1;
            if(a[i-2]==1 && (i>2)) return 1;
        }
    }
    return 0;
}
void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    for(int i:a){
        if(fn(i)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
1 0 1
*/