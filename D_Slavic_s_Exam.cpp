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
    string s,t;cin>>s>>t;
    int a=0,b=0;
    while(a<s.size() && b<t.size()){
        if(s[a]==t[b] || s[a]=='?') s[a]=t[b++];
        a++;
    }
    for(int i=0; i<s.size(); i++) if(s[i]=='?') s[i]='a';
    if(b==t.size()) cout<<"YES"<<endl<<s<<endl;
    else cout<<"NO"<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/