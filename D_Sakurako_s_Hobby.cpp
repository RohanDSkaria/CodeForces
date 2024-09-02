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
    for(int &i:a) i--;
    vi ans(n),isV(n);
    string s;cin>>s;
    for(int i=0; i<n; i++){
        if(!isV[i]){
            vi t;
            int c=i;
            while(!isV[c]){
                t.pb(c);
                isV[c]=1;
                c=a[c];
            }
            int cnt=0;
            for(int j:t) if(s[j]=='0') cnt++;
            for(int j:t) ans[j]=cnt;
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