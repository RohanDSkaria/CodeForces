#include <bits/stdc++.h>
using namespace std;
#define int long long

struct segtree{
    int k=1;
    vector<pair<int,int>> tree;
    segtree(int n){
        while(k<n) k<<=1;
        tree.assign(k<<1,{INT_MAX,0});
    }
    pair<int,int> merge(pair<int,int> a, pair<int,int> b){
        if(a.first<b.first) return a;
        else if(a.first>b.first) return b;
        return {a.first,a.second+b.second};
    }
    void set(int t, int v, int idx, int l, int r){
        if(l==r){
            tree[idx]={v,1};
            return;
        }
        int mid=l+(r-l)/2;
        if(t<=mid) set(t,v,2*idx+1,l,mid);
        else set(t,v,2*(idx+1),mid+1,r);
        tree[idx]=merge(tree[2*idx+1],tree[2*(idx+1)]);
    }
    void set(int t, int v){
        set(t,v,0,0,k-1);
    }
    pair<int,int> query(int l, int r, int idx, int L, int R){
        if(l>R || r<L) return {INT_MAX,0};
        if(l<=L && R<=r) return tree[idx];
        int mid=L+(R-L)/2;
        return merge(query(l,r,2*idx+1,L,mid),query(l,r,2*(idx+1),mid+1,R));
    }
    pair<int,int> query(int l, int r){
        return query(l,r-1,0,0,k-1);
    }
};
void solve(){
    int n,q;cin>>n>>q;
    segtree st(n);
    for(int i=0,x; i<n; i++){
        cin>>x;
        st.set(i,x);
    }
    int t,l,r;
    while(q--){
        cin>>t>>l>>r;
        if(t==1) st.set(l,r);
        else{
            auto [x,y]=st.query(l,r);
            cout<<x<<' '<<y<<'\n';
        }
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/