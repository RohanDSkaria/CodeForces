// https://codeforces.com/contest/1957/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int m=1e9+7;
int dp[300001];
void solve(){
    int n,k;cin>>n>>k;
    int cnt=n;
    dp[0]=1;dp[1]=1;dp[2]=3;
    for(int i=0,r,c; i<k; i++){
        cin>>r>>c;
        (r==c)?cnt--:cnt-=2;
    }
    for(int i=3; i<=cnt; i++) dp[i]=(dp[i-1]+(2*(i-1)*dp[i-2])%m)%m;
    cout<<dp[cnt]<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/