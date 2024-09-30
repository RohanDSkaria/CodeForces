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
    int a=0,b,c,d;cin>>b>>c>>d;
    for(int i=0; i<62; i++){
        if((d>>i)&1){
            if(((c>>i)&1) && !((b>>i)&1)){
                cout<<-1<<endl;
                return;
            }
            if(!((c>>i)&1)) a^=(1ll<<i);
        }
        else{
            if((c>>i)&1) a^=(1ll<<i);
            else{
                if((b>>i)&1){
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    cout<<a<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/