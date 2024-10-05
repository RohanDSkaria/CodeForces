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
    map<int,vi> m;
    for(int i=0; i<n; i++) m[a[i]].push_back(i);
    for(int i=1; i<=n; i++){
        int c=0;
        if(m.count(i)){
            vi &t=m[i];
            for(int j=0; j<t.size()-1; j++) if((t[j+1]-t[j])&1) c++;
            cout<<c+1<<" ";
        }
        else cout<<c<<" ";
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