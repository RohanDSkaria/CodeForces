#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int ans=1;
    for(int i=s.size()-2; i>=0; i--) ans+=s[i]!=s[i+1];
    cout<<ans-(ans>2 || (ans==2 && s[0]=='0'))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/