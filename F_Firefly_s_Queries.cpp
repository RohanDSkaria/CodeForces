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

int helper(const vector<int>& a, int idx, const vector<int>& pre) {
    int n = a.size();
    int comp = idx / n;
    int ans = comp * pre[n - 1];
    idx = (idx % n);

    int turn = comp % n;
    int th = n - turn;

    if (idx == 0) return ans;

    if (idx > th) {
        idx -= th;
        ans += pre[n - 1] - pre[turn] + a[turn] + pre[idx - 1];
    } else {
        ans += pre[turn + idx - 1] - pre[turn] + a[turn];
    }
    return ans;
}
void solve(){
    int n,q;cin>>n>>q;
    vi a(n),pre(n);cin>>a;
    pre[0]=a[0];
    for(int i=1; i<n; i++) pre[i]+=pre[i-1];
    while(q--){
        int l,r;cin>>l>>r;

    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/