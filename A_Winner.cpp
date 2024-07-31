// https://codeforces.com/contest/2/problem/A
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
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define n0 {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n;cin>>n;
    v<pair<string,int>> a(n);
    for(int i=0; i<n; i++) cin>>a[i].first>>a[i].second;
    map<string,int> m,m2;
    int max=-1e6;
    for(auto i:a){
        m[i.first]+=i.second;
        if(m[i.first]>max) max=m[i.first];
        // cout<<m[i.first]<<" ";
    }
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }
    bl
    deb(max)
    for(auto i:a){
        m2[i.first]+=i.second;
        cout<<m2[i.first]<<" ";
        if(m2[i.first]==max && m[i.first]==max){cout<<i.first<<endl;return;}
    }
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/