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
    int a,b,c,d;cin>>a>>b>>c>>d;
    int ans=0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            int k,g;
            int x,y;
            if(i==0){
                k=a;g=b;
            }
            else if(i!=0){
                k=b;g=a;
            }
            if(j==0){
                x=c;y=d;
            }
            else if(j!=0){
                x=d;y=c;
            }
            int sun=0,sla=0;
            if(k>x) sun++;
            else if(k<x) sla++;
            if(g>y) sun++;
            else if(g<y) sla++;
            if(sun>sla) ans++;
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

*/