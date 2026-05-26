#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int f=0,p=0;
    while(n--){
        char c;cin>>c;
        int k;cin>>k;
        if(c=='P') p+=k;
        else{
            cout<<(p+1<=k?"YES\n":"NO\n");
            p-=min(p,k);
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/