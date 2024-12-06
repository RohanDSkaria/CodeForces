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
    int n;cin>>n;
    if((n&1) && n<27){
        cout<<-1<<endl;
        return;
    }
    vi a(n);
    if(n&1){
        a[0]=a[9]=a[25]=1;
        a[22]=a[26]=2;
    }
    for(int i=0,c=(n&1)?3:1; i<n; i++){
        if(!a[i] && !a[i+1]) a[i]=a[i+1]=c++;
    }
    cout<<a<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/