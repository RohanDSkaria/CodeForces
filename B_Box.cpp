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
    int n;cin>>n;
    vi a(n),ans(n);cin>>a;
    set<int> s;
    for(int i=0; i<n;){
        s.insert(a[i]);
        ans[i]=a[i];
        i++;
        while(i<n && a[i]==a[i-1]){
            if(i<a[i]) i++;
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }
    for(int i=1,c=0; i<=n; i++){
        if(s.count(i)) continue;
        while(ans[c]) c++;
        ans[c]=i;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/