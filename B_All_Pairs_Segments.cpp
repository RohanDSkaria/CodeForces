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
    int n,q;cin>>n>>q;
    vi a(n);cin>>a;
    vi b(n);
    b[0]=n-1;
    b[n-1]=n-1;
    for(int i=1,j=n-2; i<=j; i++,j--){
        b[i]+=(n-i)*(i+1)-1;
        b[j]=b[i];
    }
    map<int,int> m;
    m[b[0]]=a[1]-a[0];
    for(int i=1; i<n; i++){
        m[b[i]]++;
        if(i<n-1) m[b[i]-i]+=a[i+1]-a[i]-1;
    }
    while(q--){
        int x;cin>>x;
        cout<<m[x]<<" ";
    }
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/