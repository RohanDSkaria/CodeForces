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

vi prime;
const int M=2e5+10;
void seev(){
    for(int i=2; i*i<=M; i++){
        if(prime[i]){
            for(int j=i*i; j<=M; j+=i) prime[j]=0;
        }
    }
}
void solve(){
    int n;cin>>n;
    if(n<5){
        cout<<-1<<endl;
        return;
    }
    for(int i=2; i<=n; i+=2) cout<<i<<" ";
    int k=(n&1)?n-1:n;
    int pp;
    for(int i=1; i<=n; i+=2){
        if(!prime[k+i]){
            pp=i;
            break;
        }
    }
    cout<<pp<<" ";
    for(int i=1; i<=n; i+=2){
        if(i==pp) continue;
        cout<<i<<" ";
    }
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    prime.assign(M,1);
    seev();
    while(t--) solve();
}
/*

*/