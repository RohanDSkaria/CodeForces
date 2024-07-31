// https://codeforces.com/contest/1971/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define p pair
#define pii p<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void swap(int& a, int& b){
    int t=a;a=b;b=t;
}
void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(abs(a-b)==1 || abs(a-b)==1) no
    if(abs(d-c)==1 || abs(c-d)==1) no
    int cnt=0;
    if(a>b) swap(a,b);
    for(int i=a; i<=b; i++) if(i==c||i==d) cnt++;
    (cnt==1)?(yes):(no);
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/