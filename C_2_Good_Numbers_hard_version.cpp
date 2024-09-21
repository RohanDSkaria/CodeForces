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
    string s;
    int p2=-1;
    for(int i=0; n; i++){
        int k=n%3;
        s+=k+'0';
        n/=3;
        if(k==2) p2=i;
    }
    s+='0';
    if(p2!=-1){
        int p0=p2+1;
        while(s[p0]!='0') p0++;
        s[p0]='1';
        for(int i=p0-1; i>=0; i--) s[i]='0';
    }
    int ans=0;
    for(int i=0,p=1; i<s.size(); i++,p*=3) ans+=(s[i]-'0')*p;
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/