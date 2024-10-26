#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define all(a) a.begin(),a.end()
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,k;cin>>n>>k;
    vi a(n);cin>>a;
    map<int,int> m;
    for(int i:a) m[i]++;
    v<pair<int,int>> b;
    for(auto &p:m) b.push_back(p);
    int ans=0;
    int i=0,t=0;
    int mm =b.size();
    for(int j=0; j<mm; j++){
        if(j>0 && b[j].first-b[j-1].first>1){
            while(i<j && b[j].first-b[i].first>1){
                t-=b[i].second;
                i++;
            }
        }
        t+=b[j].second;
        while(j-i+1>k){
            t-=b[i].second;
            i++;
        }
        ans=max(ans,t);
    }
    cout<<ans<<endl;
}

int32_t main(){
    IOS;
    int t;
    cin >> t;
    while(t--) solve();
}
