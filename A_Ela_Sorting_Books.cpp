#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int> m;
    for(char c:s) m[c]++;
    vector<int> t(k);
    int l=0,r=k;
    for(char c='a'; c<'z'; c++){
        for(int i=l; i<r; i++){
            if(m[c]==0){
                r=i;
                break;
            }
            if(++t[i]==n/k) l=i+1;
            m[c]--;
        }
    }
    for(int i:t) cout<<char('a'+i);
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