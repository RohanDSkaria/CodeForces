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
    int n,k,m=0;cin>>n>>k;
    if(k&1){cout<<"no"<<endl;return;}
    if(k<=n){
        cout<<"yes"<<endl;int i;
        for(i=1; k>0; i++,k--) cout<<((i&1)?i+1:i-1)<<" ";
        for(i; i<=n; i++) cout<<i<<" ";
    }
    else{
        for(int i=n-1; i>0; i-=2) m+=i;
        if(k>2*m){cout<<"no"<<endl;return;}
        cout<<"Yes"<<endl;
        if(k==2*m) for(int i=n; i>0; i--) cout<<i<<" ";
        else{
            vi a(n);for(int i=0; i<n; i++) a[i]=i+1;
            for(int i=0,j=n-1; i<n; i++,j--){
                if(k==0) break;
                if(2*abs(a[j]-a[i])<=k){
                    swap(a[j],a[i]);
                    k-=2*abs(a[j]-a[i]);
                }
                else{
                    swap(a[i],a[i+k/2]);
                    k-=2*abs(a[i]-a[i+k/2]);
                }
            }
            cout<<a;
        }
    }
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

1 2 3 4 5 6 7 
7  1

7 4
1 2 3 4 5 6 7
2 1 4 3 5 6 7

8 4
1 2 3 4 5 6 7 8
2 1 4 3 5 6 7 8 

1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1
7 5 3 1 1 3 5 7 32

1 2 3 4 5 6 7
7 6 5 4 3 2 1
6 4 2 0 2 4 6

1 2 3 4 5 6 7 8


1 2 3 4 5 6
1 6 3 4 5 2
0 4 0 0 0 4 = 8

6 2 3 4 5 1 = 10
6 2 4 3 5 1 = 12

1 2 3 4 5 6
6 4 3 2 5 1 = 14

4/2 = 2 i, i+2;

1 2 3 4 5 6
6 5 3 4 2 1

1 2 3 4 5 6 7 8


*/