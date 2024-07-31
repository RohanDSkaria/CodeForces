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
    int n,q;cin>>n>>q;
    string a,b;cin>>a>>b;
    v<vi> c(n+1,vi(26,0)),d(n+1,vi(26,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<26; j++){
            c[i+1][j]=c[i][j];
            d[i+1][j]=d[i][j];
        }
        c[i+1][a[i]-'a']++;
        d[i+1][b[i]-'a']++;
    }
    while(q--){
        int l,r,ans=0;cin>>l>>r;
        l--;
        vi e(26,0),f(26,0);
        for(int j=0; j<26; j++){
            e[j]=c[r][j]-c[l][j];
            f[j]=d[r][j]-d[l][j];
        }
        for(int j=0; j<26; j++) ans+=abs(e[j]-f[j]);
        cout<<ans/2<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/