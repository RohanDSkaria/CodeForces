// https://codeforces.com/contest/1954/problem/B
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

void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    map<int,int> mp;
    for(int i:a) mp[i]++;
    int in=0,ans=n;
    if(mp.size()==1){cout<<-1<<endl;return;}
    for(int i=0; i<n; i++){
        if(a[i]==a[0]) in++;
        else{
            ans=min(ans,in);
            in=0;
        }
    }
    cout<<min(ans,in)<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/