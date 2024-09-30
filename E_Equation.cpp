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

double c;
double y(double n){
    return n*n + sqrt(n) - c;
}
double dy(double n){
    double k=1.0/sqrt(n);
    return 2*n + 0.5*k;
}
void solve(){
    cin>>c;
    double ans=c,ep=1e-6;
    while(1){
        double k=y(ans);
        if(k<=ep) break;
        ans=ans-k/dy(ans);
    }
    cout<<fixed<<setprecision(6)<<ans;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
x = x - y/dy;

 y(x)
*/