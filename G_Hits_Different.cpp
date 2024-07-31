#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define p pair
#define pii p<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

// int b[1000001];
// int a[1416][1416];

v<vi> a(1416, vi(1416));
vi b(1000001);
void solve(){
    int n;cin>>n;
    cout<<b[n]<<endl;
}
int32_t main(){
    IOS int t=1,c=1;
    for(int i=1; i<1416; i++){
        for(int j=i-1; j>0; j--){
            a[j][i-j] = a[j][i-j-1] + a[j-1][i-j] - a[j-1][i-j-1] + c*c;
            b[c++]=a[j][i-j];
        }
    }
    cin>>t;
    while(t--) solve();
}
/*

*/