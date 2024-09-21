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

void solve(){
    int n;cin>>n;
    vi a(n);cin>>a;
    int sum=accumulate(all(a),0ll);
    int k=sum/n;
    if(a[0]<k && a[n-1]>k){
        sum-=a[0]+a[n-1];
        int r=(sum%(n-2));
        r=((sum+r)/(n-2));
        int one = abs(r-a[0]);
        int two = abs(r-a[n-1]);
        cout<<max({one,two,abs(a[n-1]-a[0])})<<endl;
    }
    else if(a[0]<k){
        sum-=a[0];
        int r = (sum%(n-1));
        r=(sum+r)/(n-1);
        cout<<r-a[0]<<endl;
    }
    else if(a[n-1]>k){
        sum-=a[n-1];
        int r = (sum%(n-1));
        r=(sum+r)/(n-1);
        cout<<abs(r-a[n-1])<<endl;
    }
    else{
        for(int i=1; i<n-1; i++){
            a[i]+=
        }
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/