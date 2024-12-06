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
    int n,m;cin>>n>>m;
    v<string> a(n);cin>>a;
    int t=0,b=n-1,l=0,r=m-1,ans=0;
    vi cc;
    while(t<=b && l<=r){
        v<char> layer,temp;
        for(int i=l; i<=r; i++){
            layer.pb(a[t][i]);
            if(temp.size()<3) temp.pb(a[t][i]);
        }
        t++;
        for(int i=t; i<=b; i++){
            layer.pb(a[i][r]);
            if(temp.size()<3) temp.pb(a[i][r]);
        }
        r--;
        if(t<=b){
            for(int i=r; i>=l; i--) layer.pb(a[b][i]);
            b--;
        }
        if(l<=r){
            for(int i=b; i>=t; i--) layer.pb(a[i][l]);
            l++;
        }
        for(int i=0; i<3; i++) layer.pb(temp[i]);
        // deb(layer)
        int nn=layer.size()-3;
        for(int i=0; i<nn; i++){
            if(layer[i]=='1' && layer[i+1]=='5' && layer[i+2]=='4' && layer[i+3]=='3') ans++;
        }
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