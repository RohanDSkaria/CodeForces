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
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vi a(n),b(m);cin>>a>>b;
    int s1=0,s2=0,ma=1e9+5,Ma=-1,mb=1e9+5,Mb=-1;
    for(int i:a) s1+=i,ma=min(ma,i),Ma=max(Ma,i);
    for(int i:b) s2+=i,mb=min(mb,i),Mb=max(Mb,i);
    if(k&1){cout<<s1+max(0ll,Mb-ma)<<endl;return;}
    if(Mb>ma){
        s1+=Mb-ma;
        Ma=max(Ma,Mb);
        mb=min(mb,ma);
    }
    if(Ma>mb) s1-=Ma-mb;
    cout<<s1<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
6 7 8 9
1 2 3 4
*/