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
    vi pre(n),suf(n);
    set<int> s;
    int mex=0;
    for(int i=0; i<n; i++){
        s.insert(a[i]);
        while(s.count(mex)) mex++;
        pre[i]=mex;
    }
    s.clear();
    mex=0;
    for(int i=n-1; i>=0; i--){
        s.insert(a[i]);
        while(s.count(mex)) mex++;
        suf[i]=mex;
    }
    // deb(pre)deb(suf)
    int ans=-1;
    for(int i=0; i<n-1; i++){
        if(pre[i]==suf[i+1]) ans=i;
    }
    if(ans==-1){cout<<-1<<endl;return;}
    cout<<2<<endl;
    cout<<1<<" "<<ans+1<<endl;
    cout<<ans+2<<" "<<n<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/