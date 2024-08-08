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
    v<v<char>> a(2,v<char>(n));cin>>a;
    v<v<bool>> isV(2,v<bool>(n,1));
    vector<int> dx={0,1,0,-1},dy={1,0,-1,0};
    queue<pair<int,int>> q;
    q.push({0,0});isV[0][0]=0;
    while(q.size()){
        pair<int,int> t=q.front();
        q.pop();
        for(int d=0; d<4; d++){
            int nx=t.first+dx[d],ny=t.second+dy[d];
            if(nx>=0 && nx<2 && ny>=0 && ny<n){
                (a[nx][ny]=='>')?ny++:ny--;
            }
            if(nx==1 && ny==n-1){cout<<"YES"<<endl;return;}
            if(nx>=0 && nx<2 && ny>=0 && ny<n && isV[nx][ny]) q.push({nx,ny}),isV[nx][ny]=0;
        }
    }
    cout<<"NO"<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
>>><
>><<

*/