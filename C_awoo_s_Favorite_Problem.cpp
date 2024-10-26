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
#define no {cout<<"NO"<<endl;return;}
#define yes {cout<<"YES"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    string s,t;cin>>s>>t;
    vi a(3);
    for(char c:t) a[c-'a']++;
    for(char c:s) a[c-'a']--;
    if(a[0]||a[1]||a[2]) no
    int c1=0,c2=0;
    for(int i=0; i<n; i++){
        if(s[i]=='a') c1++;
        if(t[i]=='a') c1--;
        if(t[i]=='c') c2++;
        if(s[i]=='c') c2--;
        if(c1<0 || c2<0) no 
    }
    c1=0;c2=0;
    while(c1<n && c2<n){
        while(s[c1]=='b') c1++;
        while(t[c2]=='b') c2++;
        if(c1<n && c2<n && s[c1++]!=t[c2++]) no
    }
    yes
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

s = aaacbaa
t = abcaaaa

*/