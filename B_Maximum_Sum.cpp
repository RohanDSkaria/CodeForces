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

const int m=1e9+7;
int fn(vi &a){
    int ans=INT_MIN,c=0;
    for(int i:a) c=max(i,c+i),ans=max(ans,c);
    return ans;
}
void solve(){
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    int ls=fn(a),sum=accumulate(all(a),0LL)-ls;
    if(ls>0){
        for(int i=0; i<k; i++) ls=(2*ls)%m;
    }
    cout<<((sum+ls)%m+m)%m<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/