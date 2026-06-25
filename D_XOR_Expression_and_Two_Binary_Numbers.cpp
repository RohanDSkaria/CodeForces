#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s,z;cin>>s>>z;
    int a=0,b=0,ab=0;
    for(int i=0; i<n; i++){
        a+=s[i]=='1';
        b+=z[i]=='1';
        ab+=s[i]!=z[i];
    }
    a*=n-a;
    b*=n-b;
    ab*=n-ab;
    int t=1,j=1;
    for(int i=2; i<=k; i++) tie(t,j)=pair{t+j,2*t-1};
    cout<<(t*(a+b))+(j*ab)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/