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

int fn(vi &a,int i, int t){
    int s=i+1,e=a.size()-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(a[m]*a[i]>t) e=m-1;
        else s=m+1;
    }
    return e;
}
void solve(){
    int k;cin>>k;
    vi a(k);cin>>a;
    sort(all(a));
    int t=k-2;
    for(int i=0; i<k; i++){
        int b=fn(a,i,t);
        if(a[i]*a[b]==t){
            cout<<a[i]<<" "<<a[b]<<endl;
            break;
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