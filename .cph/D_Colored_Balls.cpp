// https://codeforces.com/contest/1954/problem/D
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
#define pii pair<int,int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
vi dp;
int m=998244353;
void solve(){
    int n,ans=0;cin>>n;
    vi a(n);cin>>a;
    sort(all(a));
    dp.resize(5001);
    dp[0]=1;
    for(int i:a){
        for(int j=0; j<5001; j++){
            ans+=max(i, (i+j+1)/2)*dp[j];
            ans%=m;
        }
        for(int j=5000; j>=i; j--){
            dp[j]+=dp[j-i];
            dp[j]%=m;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/