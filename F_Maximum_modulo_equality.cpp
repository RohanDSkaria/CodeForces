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
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,pair<F,S>& p){os<<"{"<<p.first<<","<<p.second<<"}";return os;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}


class SegmentTree {
public:
    vector<int> tree;
    int identity = 0;
    int N;

    SegmentTree(int n) {
        N = n;
        tree.assign(2 * N, identity);
    }

    int merge(int a, int b) {
        return __gcd(a,b);
    }

    void update(int idx, int val) {
        idx += N;
        tree[idx] = val;
        for (idx /= 2; idx >= 1; idx /= 2) {
            tree[idx] = merge(tree[2 * idx], tree[2 * idx + 1]);
        }
    }

    int query(int l, int r) {
        l += N;
        r += N;
        int res = identity;
        while (l <= r) {
            if (l % 2 == 1) res = merge(res, tree[l++]);
            if (r % 2 == 0) res = merge(res, tree[r--]);
            l /= 2;
            r /= 2;
        }
        return res;
    }
};


void solve(){
    int n,q;cin>>n>>q;
    SegmentTree segTree(n);
    vi a(n);cin>>a;
    for(int i=1; i<n; i++) segTree.update(i,abs(a[i]-a[i-1]));
    while(q--){
        int l,r;cin>>l>>r;
        if(l==r) cout<<0<<" ";
        else cout<<segTree.query(l,r-1)<<" ";
    }
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/