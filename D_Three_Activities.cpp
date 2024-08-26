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
    multimap<int,int> a,b,c;
    for(int i=0; i<n; i++){
        int d;cin>>d;
        a.insert({d,i});
    }
    for(int i=0; i<n; i++){
        int d;cin>>d;
        b.insert({d,i});
    }
    for(int i=0; i<n; i++){
        int d;cin>>d;
        c.insert({d,i});
    }
    int ans=-1,x=0;
    for(auto it=a.rbegin(); x<3; it++,x++){
        int y=0;
        for(auto jt=b.rbegin(); y<3; jt++,y++){
            int z=0;
            for(auto kt=c.rbegin(); z<3; kt++,z++){
                if(kt->second!=jt->second && kt->second!=it->second && jt->second!=it->second){
                    ans=max(ans,kt->first+jt->first+it->first);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/