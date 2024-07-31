// https://codeforces.com/problemset/problem/924/B
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

void solve(){
    int n,u;cin>>n>>u;
    vi a(n);cin>>a;
    // for(int i=0; i<n-2; i++) cout<<*(upper_bound(a.begin()+i+1,a.end(),a[i]+u)-1)<<" ";
    long double ans=-1;
    cout<<fixed<<setprecision(20);
    for(int i=0; i<n-3; i++){
        int j=a[i+1];
        int k=*(upper_bound(a.begin()+i+1,a.end(),a[i]+u)-1);
        // long double num=(1.0)*(k-j);
        // long double deno=(1.0)*(k-a[i]);
        // long double v=num/deno;

        long double v=((1.0)*(k-j))/(k-a[i]);
        // deb(j)deb(k)deb(v)
        ans=max(ans,v);
    }
    if(a[n-3]+u>=a[n-1]){
        long double v=((1.0)*(a[n-1]-a[n-2]))/(a[n-1]-a[n-3]);
        ans=max(ans,v);
    }
    ans=0.00000000000000000000;
    // if(!ans) cout << " dani " << endl;
    // cout << (ans == 0.00000000000000000000) << endl;
    // if(ans==0.00000000000000000000) cout<<-1<<endl;
    // else cout<<ans<<endl;

    cout << ans?(ans+4):-1 << endl; 
    cout << " dani " << endl;
    // cout << 10*8 + 9 << endl;
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/