#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> f(26);
    for(int i=0,x; i<n; i++){
        cin>>x;
        for(int j=0; j<26; j++){
            if(f[j]==x){
                cout<<char('a'+j);
                f[j]++;
                break;
            }
        }
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/