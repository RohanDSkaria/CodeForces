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
    int l,r,L,R;cin>>l>>r>>L>>R;
    // if(L<l && r<R) cout<<r-l+2<<endl;
    // else if(l<L && r>R) cout<<R-L+2<<endl;
    // else if(l==L && r==R) cout<<r-l<<endl;
    // else if(r==R) cout<<r-max(l,L)+1<<endl;
    // else if(l==L) cout<<min(r,R)-l<<endl;
    // else cout<<min(r,R)-max(l,L)+2<<endl;

    if(r<L || l>R) cout<<1<<endl;
    // else if(l==L){
    //     if(r>R) cout<<R-l+1<<endl;
    //     else if(r==R) cout<<r-l<<endl;
    //     else cout<<r-l+1<<endl;
    // }
    // else if(l<L){
    //     if(r>R) cout<<R-L+2<<endl;
    //     else if(r==R) cout<<r-L+1<<endl;
    //     else cout<<r-L+1<<endl;
    // }
    // else{
    //     if(r>R) cout<<R-l+2<<endl;
    //     else if(r==R) cout<<r-l+1<<endl;
    //     else cout<<r-l+2<<endl;
    // }
    else if(l==L && r==R)  cout<<r-l<<endl;
    else if(l==L || r==R) cout<<min(r,R)-max(l,L)+1<<endl;
    else cout<<min(r,R)-max(l,L)+2<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
1 2 3 4 5 6 7
l     r
L   R R R

l      r
  L  R R R

  l    r
L    R R R
*/