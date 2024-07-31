// https://codeforces.com/contest/1931/problem/E
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yed {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int cnt(int i){
    int c=0;
    while(i%10==0){c++;i/=10;}
    return c;
}
int c2(int i){
    int c=0;
    while(i>0){c++;i/=10;}
    return c;
}
void solve(){
    int n,m,nod=0,p=0;cin>>n>>m;
    vi a(n),b;cin>>a;
    for(int i:a){
        if(i%10==0) b.pb(cnt(i));
        nod+=c2(i);
    }
    sort(rall(b));
    while(p<b.size()){nod-=b[p];p+=2;}
    cout<<((nod>=m+1)?"Sasha":"Anna")<<endl;
}
int32_t main(){
    IOS
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/