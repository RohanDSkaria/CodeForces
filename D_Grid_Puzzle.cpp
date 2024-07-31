#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,c=0;cin>>n;
    vi a(n);cin>>a;
    int ans=n;
    for(int i=0; i<n; i++){
        if(a[i]==0) ans--;
        else if(i!=n-1 && a[i]<3 && a[i+1]<3 && a[i+1]!=0) ans--,i++;
        else if(i!=0 && (a[i]==3 || a[i]==4)) c++;
        else if(c!=0){
            if(!(c&1)) ans--;
            c=0;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
1 3 4 2 0 4

1
1 1 1
1 1 1 1
1 1

1 1 1 1


0 2 2 2

1 1
1 1
1 1


*/