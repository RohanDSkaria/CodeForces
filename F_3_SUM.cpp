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
    vi a(10);
    while(n--){
        int x;cin>>x;
        a[x%10]++;
    }
    for(int i=0; i<=9; i++)
        for(int j=0; j<=9; j++)
            for(int k=0; k<=9; k++)
                if((i+j+k)%10==3){
                    a[i]--;a[j]--;a[k]--;
                    if(a[i]>=0 && a[j]>=0 && a[k]>=0){
                        cout<<"YES"<<endl;
                        return;
                    }
                    a[i]++;a[j]++;a[k]++;
                }
    cout<<"NO"<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/