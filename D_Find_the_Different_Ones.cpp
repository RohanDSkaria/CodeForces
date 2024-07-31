// https://codeforces.com/problemset/problem/1927/D
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
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
    vi a(n),b(n);cin>>a;
    b[n-1]=-1;
    for(int i=n-2; i>=0; i--) b[i]=(a[i]==a[i+1])?b[i+1]:i+1;
    int q;cin>>q;
    while(q--){
        int l,r;cin>>l>>r;
        if(b[l-1]==-1 || b[l-1]>r-1){cout<<-1<<" "<<-1<<endl;continue;}
        cout<<l<<" "<<b[l-1]+1<<endl;
    }
    bl
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
2 2 3 -1 -1

*/