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
    int n,m;cin>>n;
    vi a(n);cin>>a>>m;
    while(m--){
        string s;cin>>s;
        if(s.size()!=n){
            cout<<"NO"<<endl;
            continue;
        }
        map<int,char> m1;
        map<char,int> m2;
        int ya=0;
        for(int i=0; i<n; i++){
            if(!m1.count(a[i])) m1[a[i]]=s[i];
            if(!m2.count(s[i])) m2[s[i]]=a[i];
            if(m1[a[i]]!=s[i] || m2[s[i]]!=a[i]){
                cout<<"NO"<<endl;
                ya=1;
                break;
            }
        }
        if(ya) continue;
        cout<<"YES"<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/