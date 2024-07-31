// https://codeforces.com/problemset/problem/1921/E
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define v vector
#define yes {cout<<"Alice"<<endl;return;}
#define no {cout<<"Bob"<<endl;return;}
#define dd {cout<<"Draw"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    int n,m,x1,y1,x2,y2,k;cin>>n>>m>>x1>>y1>>x2>>y2;
    k=x2-x1; if(k<=0) dd
    (k%2)?((abs(y1-y2)<=1 || ((k+1)/2+1>=y1 && y1>y2) || ((k+1)/2+y1>=m && y1<y2))?(yes):(dd)):((y1==y2 || (k/2+1>=y2 && y1<y2) || (k/2+y2>=m && y1>y2))?(no):(dd));
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}