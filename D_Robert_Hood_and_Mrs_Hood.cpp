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

// void solve(){
//     int n,d,k;cin>>n>>d>>k;
//     vi s(n+1),e(n+1);
//     for(int i=0; i<k; i++){
//         int a,b;cin>>a>>b;
//         s[a]++;
//         e[b]++;
//     }
//     int l=1,c=0,m=2e9,M=-1,bro=1,mom=1;
//     for(int r=1; r<n+2 && l<n-d+2; r++){
//         if(r-l==d){
//             if(c>M) M=c,bro=l;
//             if(c<m) m=c,mom=l;
//             c-=e[l++];
//         }
//         if(r==n+1) break;
//         c+=s[r];
//     }
//     cout<<bro<<" "<<mom<<endl;
// }
void solve(){
    int n,d,k;cin>>n>>d>>k;
    vi s(n+1),e(n+1);
    for(int i=0; i<k; i++){
        int a,b;cin>>a>>b;
        s[a]++;
        e[b]++;
    }
    for(int i=0; i<n; i++){
        s[i+1]+=s[i];
        e[i+1]+=e[i];
    }
    int m=1e9,M=-1,bro,mom;
    for(int i=d; i<=n; i++){
        int c=s[i]-e[i-d];
        if(c>M) M=c,bro=i-d+1;
        if(c<m) m=c,mom=i-d+1;
    }
    cout<<bro<<" "<<mom<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/