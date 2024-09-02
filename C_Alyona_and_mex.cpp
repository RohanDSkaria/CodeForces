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
    int n,m;cin>>n>>m;
    v<vi> a(m,vi(2));cin>>a;
    int mn=n+1;
    for(auto i:a) mn=min(mn,i[1]-i[0]+1);
    cout<<mn<<endl;
    int i=0;
    while(i<n){
        for(int k=0; k<mn && i<n; k++,i++) 
            cout<<k<<" ";
    }
}
int32_t main(){
    IOS int t=1;
    // cin>>t;
    while(t--) solve();
}
/*


// void solve(){
//     int n,m;cin>>n>>m;
//     vi a(n);
//     for(int i=0; i<m; i++){
//         int l,r;cin>>l>>r;
//         a[l]+=1;
//         if(r<n-1) a[r+1]-=1;
//     }
//     int mx=a[0];
//     for(int i=1; i<n; i++){
//         a[i]+=a[i-1];
//         mx=max(mx,a[i]);
//     }
//     int cnt=0,l=n+1,r=-1;
//     for(int i=0; i<n; i++) if(a[i]==mx){
//         cnt++;
//         l=min(l,i);
//         r=max(r,i);
//     }
//     int k=0;
//     for(int i=l; i<=r; i++) a[i]=k++;
//     for(int i=0; i<l; i++) a[i]=k++;
//     for(int i=r+1; i<n; i++) a[i]=k++;
//     cout<<cnt<<endl<<a<<endl;
// }


*/