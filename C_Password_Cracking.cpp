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
    string s;
    bool pre=1,suf=0,ya;
    while(1){
        if(pre){
            cout<<"? "<<s+'1'<<endl;
            cout.flush();
            cin>>ya;
            if(ya) s+='1';
            else{
                cout<<"? "<<s+'0'<<endl;
                cout.flush();
                cin>>ya;
                if(ya) s+='0';
                else pre=0;
            }
        }
        else{
            cout<<"? "<<'1'+s<<endl;
            cout.flush();
            cin>>ya;
            if(ya) s='1'+s;
            else s='0'+s;
        }
        if(s.size()==n) break;
    }
    cout<<"! "<<s<<endl;
    cout.flush();
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/