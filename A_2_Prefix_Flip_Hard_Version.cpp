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
    string a,b;cin>>a>>b;
    vi ans;
    ans.push_back(0);
    for(int i=0; i<n; i++){
        if(a[i]=='1'){
            int k=i;
            while(a[i+1]=='1') i++;
            if(i==0){
                ans.push_back(1);
                ans[0]++;
            }
            else if(k==0){
                ans.push_back(i+1);
                ans[0]++;
            }
            else{
                ans.insert(ans.end(),{k,i+1});
                ans[0]+=2;
            }
        }
    }
    // deb(ans)
    vi bb;
    for(int i=0; i<n; i++){
        if(b[i]=='1'){
            int k=i;
            while(b[i+1]=='1') i++;
            if(i==0) bb.push_back(1);
            else if(k==0) bb.push_back(i+1);
            else bb.insert(bb.end(),{k,i+1});
        }
    }
    // deb(bb)
    // deb(ans)
    ans[0]+=bb.size();
    for(int i=bb.size()-1; i>=0; i--) ans.push_back(bb[i]);
    cout<<ans<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

0 1 0 1 1
1 1 0 1 1
0 0 0 1 1
1 1 1 1 1
0 0 0 0 0



*/