// https://codeforces.com/contest/1954/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void swap(string& x, string& y, int i){
    char t=x[i];
    x[i]=y[i];
    y[i]=t;
}
void solve(){
    string x,y;cin>>x>>y;
    bool ya=1;
    for(int i=0; i<x.length(); i++){
        if(x[i]==y[i]) continue;
        else if(ya){
            if(y[i]>x[i]) swap(x,y,i);
            ya=0;
        }
        else{ if(x[i]>y[i]) swap(x,y,i);}
    }
    cout<<x<<endl<<y<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/