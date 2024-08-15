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
    int n,ans=0;cin>>n;
    string s;cin>>s;
    bool ya=1;
    int c=0,t=-1,cm=0;
    for(int i=0; i<n; i++){
        if(s[i]=='*') c++;
        if(s[i]=='.' && c>0 && ya) ya=0,t=c;
        if(i==n/2-1) cm=c;
    }
    if(ya || c<2 || t==c){cout<<0<<endl;return;}
    int i,j;
    if(cm>c-cm){
        for(i=n/2-1; i>=0; i--) if(s[i]=='*') break;
        j=i;
        deb(i)
        for(int k=n/2; k<n; k++){
            if(s[k]=='*') ans+=k-i-1,i++;
        }
        for(int k=i-1; k>=0; k--){
            if(s[k]=='*') ans+=j-k-1,j--;
        }
    }
    else{
        for(i=n/2; i<n; i++) if(s[i]=='*') break;
        j=i;
        for(int k=n/2-1; k>=0; k--){
            if(s[k]=='*') ans+=i-k-1;i--;
        }
        for(int k=j+1; k<n; k++){
            if(s[k]=='*') ans+=k-j-1;j++;
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
**.*..

*/