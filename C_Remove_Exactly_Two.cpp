#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb push_back
#define v vector
#define vi v<int>
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int n;cin>>n;
    v<set<int>>adj(n+1);
    for(int i=1,x,y;i<n;i++){
        cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    vector<int>level(n+1,0);
    auto dfs1=[&](auto &&Self,int node,int parent,int d)->void
    {
        level[node]=d;
        for(auto nb:adj[node]){
            if(nb!=parent and nb!=node)Self(Self,nb,node,d+1);
        }
    };
    dfs1(dfs1,1,0,0);
    int ans=0;
    set<int>st;
    for(int i=1;i<=n;i++)st.insert(i);
    for(int k=0;k<2;k++){
        int bestNode=*st.begin();
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end())continue;
            if(adj[bestNode].size()<adj[i].size()){
                bestNode=i;
            }
            else if(adj[bestNode].size()==adj[i].size() and level[bestNode]<level[i])
                bestNode=i;
        }
        for(int i=1;i<=n;i++){
            if(adj[i].find(bestNode)!=adj[i].end()){
                adj[i].erase(bestNode);
            }
        }
        st.erase(bestNode);
        adj[bestNode].clear();
    }
    vi visited(n+1);
    auto dfs=[&](auto &&Self,int node,int parent)->void
    {
        visited[node]=1;
        for(auto nb:adj[node]){
            if(nb!=parent and nb!=node)Self(Self,nb,node);
        }
    };
    int cnt=0;
    for(int i:st){
        if(!visited[i])dfs(dfs,i,0),ans++;
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