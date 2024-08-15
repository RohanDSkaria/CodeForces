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
    int n,m,k;cin>>n>>m>>k;
    string s;cin>>s;
    int a=m-1,b=0,c=0;
    for(int i=0; i<n; i++){
        if(s[i]=='L') a=m;
        else if(s[i]=='W'){
            if(a<=0) b++;
        }
        else if(a<=0) c++;
        a--;
    }
    if(b>k) c++;
    cout<<((c)?"NO":"YES")<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/