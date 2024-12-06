#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int dd(int n){
    int c=0;
    while(n) n/=10,c++;
    return c;
}
int cc(int d, int n){
    int ans=0;
    while(d--) ans=ans*10+n;
    return ans;
}
void solve(){
    int n;cin>>n;
    int d=dd(n),i;
    for(i=1; i<10; i++){
        if(cc(d,i)<=n) continue;
        break;
    }
    cout<<9*(d-1) + i-1<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/