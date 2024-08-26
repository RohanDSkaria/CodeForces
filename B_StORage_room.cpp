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
    v<vi> M(n,vi(n));cin>>M;
    vi a(n,(1<<30)-1);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            a[i]&=M[i][j];
            a[j]&=M[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(M[i][j]!=(a[i]|a[j])){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl<<a<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/