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
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int cc(int i, int b){
    int a=1+b,k=b;
    for(int j=2; j<i; j++){
        if(k>1e18/b) return 1e18+65;
        k*=b;
        a+=k;
    }
    return a;
}
int fn(int &n){
    for(int i=64; i>2; i--){
        int s=2,e=n-1;
        while(s<=e){
            int b=s+(e-s)/2;
            int k=cc(i,b);
            if(k==n) return b;
            (k>n)?e=b-1:s=b+1;
        }
    }
    return n-1;
}
void solve(){
    int n;cin>>n;
    cout<<((fn(n)==n-1)?"NO":"YES")<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/