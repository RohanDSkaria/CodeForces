#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int f=-1,s;
    for(int i=0; i<n; i++){
        char c;cin>>c;
        if(c=='B'){
            if(f==-1) f=i;
            s=i;
        }
    }
    cout<<s-f+1<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/