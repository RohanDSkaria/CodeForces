#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m,q;cin>>n>>m>>q;
    vi a(n),b(m);cin>>a>>b;
    set<int> s;
    for(int i=0,j=0; i<m && j<n; i++){
        if(s.count(b[i])) continue;
        if(a[j]==b[i]) s.insert(a[j++]);
        else{
            cout<<"tidak"<<endl;
            return;
        }
    }
    cout<<"ya"<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/