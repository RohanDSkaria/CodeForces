#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    string a,b;cin>>a>>b;
    int o=0,c=0;
    for(int i=0; i<n; i++){
        if(a[i]==b[i]) a[i]==')'?(o--,c--):(o++,c++);
        else o>c?(o--,c++):(o++,c--);
        if(o<0 || c<0) return 0;
    }
    return o==0 && c==0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/