// https://codeforces.com/contest/1956/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define v vector
#define vi v<int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,s=0,k=1;cin>>n;
    vi a(n),b(n);
    for(int i=1; i<=n; i++){a[i-1]=i;b[n-i]=i;}
    for(int i=1; i<=n; i++){s+=i*k;k+=2;}
    cout<<s<<" "<<2*n<<endl;
    for(int i=1; i<=n; i++){
        cout<<1<<" "<<i<<" "<<a<<endl;
        cout<<2<<" "<<n-i+1<<" "<<b<<endl;
    }
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/