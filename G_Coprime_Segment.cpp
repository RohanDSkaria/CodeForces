#include <bits/stdc++.h>
using namespace std;
#define int long long

struct segtree{
    int k=1;
    vector<int> tree;
    segtree(int n){
        while(k<n) k<<=1;
        tree.assign(k<<1,0);
    }
    void set(int t, int v, int idx, int l, int r){
        if(l==r){
            tree[idx]=v;
            return;
        }
        int mid=l+(r-l)/2;
        if(t<=mid) set(t,v,2*idx+1,l,mid);
        else set(t,v,2*(idx+1),mid+1,r);
        tree[idx]=__gcd(tree[2*idx+1],tree[2*(idx+1)]);
    }
    void set(int t, int v){
        set(t,v,0,0,k-1);
    }
    int query(int l, int r, int idx, int L, int R){
        if(l>R || r<L) return 0;
        if(l<=L && R<=r) return tree[idx];
        int mid=L+(R-L)/2;
        return __gcd(query(l,r,2*idx+1,L,mid),query(l,r,2*(idx+1),mid+1,R));
    }
    int query(int l, int r){
        return query(l,r,0,0,k-1);
    }
};
void solve(){
    int n;cin>>n;
    segtree st(n);
    for(int i=0,x; i<n; i++){
        cin>>x;
        st.set(i,x);
    }
    int ans=n+1;
    for(int l=0,r=0; r<n; r++){
        while(l<=r && st.query(l,r)==1){
            ans=min(ans,r-l+1);
            l++;
        }
    }
    cout<<(ans==n+1?-1:ans)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/