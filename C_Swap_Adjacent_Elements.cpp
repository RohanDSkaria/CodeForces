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
    string s;cin>>s;
    vi bf(n),af(n);
    for(int i=1,c=0; i<n; i++){
        if(s[i-1]=='1') c++;
        else c=0;
        bf[i]=c;
    }
    for(int i=n-2,c=0; i>=0; i--){
        if(s[i]=='1') c++;
        else c=0;
        af[i]=c;
    }
    for(int i=0; i<n; i++){
        if(a[i]!=i+1){
            int k=abs(a[i]-i-1);
            if(a[i]<i+1){
                if(bf[i]<k){
                    cout<<"NO";
                    return;
                }
            }
            else{
                if(af[i]<k){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
    input - node index.js/dir1/dir2/file.js
    o/p - 7 w
*/