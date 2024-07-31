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
    int a,b,c,ans=0;cin>>a>>b>>c;
    int k=min({a,b,c});
    k-=k%3;
    ans+=k;
    a-=k;b-=k;c-=k;

}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
24 + 2 + 13
13 32 2
13 28 0
*/