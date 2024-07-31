// https://codeforces.com/problemset/problem/20/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define INF 1e18
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define pii pair<int,int>
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

map<int,v<pii>> mp;
vi node(100100),dist(100100);
priority_queue<int> q;

void pp(int n){
    if(n!=1) pp(node[n]);
    cout<<n<<" ";
}
void solve(){
    int n,m;cin>>n>>m;
    int a,b,w;
    while(m--){
        cin>>a>>b>>w;
        mp[a].pb(make_pair(b,w));
        mp[b].pb(make_pair(a,w));
    }
    q.push(1);
    for(int i=1; i<=n; i++){
        dist[i]=INF;
        node[i]=i;
    }
    dist[1]=0;
    while(!q.empty()){
        a=q.top();
        q.pop();
        for(int i=0; i<mp[a].size(); i++){
            b=mp[a][i].first;
            w=mp[a][i].second;
            if(dist[a]+w<dist[b]){
                dist[b]=dist[a]+w;
                q.push(b);
                node[b]=a;
            }
        }
    }
    if(dist[n]==INF) {cout<<-1;return;}
    pp(n);
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/