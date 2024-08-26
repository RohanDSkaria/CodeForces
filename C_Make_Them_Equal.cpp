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
    char c;cin>>c;
    string s;cin>>s;
    bool ya=1,ya2=1;
    for(int i=0; i<n; i++){
        if(s[i]!=c){
            ya=0;
            if((i&1)) ya2=0;
        }
    }
    if(ya) cout<<0<<endl;
    else if(ya2) cout<<1<<endl<<2<<endl;
    else if(s.back()==c) cout<<1<<endl<<n<<endl;
    else{
        for(int i=1; i<=n; i++){
            ya=1;
            for(int j=i; j<=n; j+=i){
                if(s[j-1]!=c){
                    ya=0;
                    break;
                }
            }
            if(ya){
                cout<<1<<endl<<i<<endl;
                return;
            }
        }
        cout<<2<<endl<<n<<" "<<n-1<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/