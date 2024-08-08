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

vi a(3*1e5+1),pre(3*1e5+1);
void ff(){
    for(int i=1; i<a.size(); i++){
        int k=i;
        while(1){
            if(k==0) break;
            k/=3;
            a[i]++;
        }
    }
}
void solve(){
    int l,r;cin>>l>>r;
    cout<<a[l]+pre[r]-pre[l-1]<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    ff();
    for(int i=1; i<a.size(); i++) pre[i]=pre[i-1]+a[i];
    while(t--) solve();
}
/*

*/