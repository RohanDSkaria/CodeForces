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
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x;return os;}

void solve(){
    int m,s;cin>>m>>s;
    if(s>m*9 || (s==0 && m!=1)){cout<<-1<<" "<<-1;return;}
    if(s==0){cout<<0<<" "<<0;return;}
    vi a(m),b(m);
    for(int i=0; i<m; i++){
        if(s<9){
            a[i]=s;
            b[i]=s;
            break;
        }
        a[i]=9;
        b[i]=9;
        s-=9;
    }
    sort(all(a));
    sort(all(b));
    if(a[0]==0){
        b[0]=1;
        int i=1;
        while(i<m && b[i]==0) i++;
        b[i]--;
    }
    cout<<b<<" ";
    sort(rall(a));
    cout<<a;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/