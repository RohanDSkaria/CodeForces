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

int base(int n, int A){
    int s = 0;
    while(A > 0){
        s += A%n;
        A /= n;
    }
    return s;
}
int gcd(int n, int m){
    int BiggestCommonDiv = 1;
    for(int i = 1; i <= min(n,m); i++){
        if(n%i==0 && m%i==0){
            BiggestCommonDiv = i;
        }
    }
    return BiggestCommonDiv;
}
void solve(){
    int A;cin>>A;
    int val = 0;
    for(int i = 2; i < A; i++){
        val += base(i,A);
    }
    int cd = gcd(val, A-2);
    cout << val/cd << "/" << (A-2)/cd;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/