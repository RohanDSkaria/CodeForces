#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int suf=0;
    for(char c:s) suf+=(c=='1' || c=='3');
    int ans=suf,c=0;
    for(char ch:s){
        if(ch=='4') continue;
        ch=='2'?c++:suf--;
        ans=max(ans,c+suf);
    }
    cout<<(s.size()-ans)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
4
12
24
32
44
*/