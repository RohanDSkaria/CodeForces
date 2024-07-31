// https://codeforces.com/contest/518/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vb v<bool>
#define vc v<char>
#define vvi v<vi>
#define vvc v<vc>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " = " << x << endl;
#define pii pair<int,int>
#define vpii v<pii>
#define fi first
#define se second
#define mii map<int,int>
#define mci map<char,int>
#define si set<int>
#define sc set<char>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
int gcd(int a, int b){return b?gcd(b,a%b):a;}
int lcm(int a, int b){return a/gcd(a,b)*b;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve(){
    string s,t;cin>>s>>t;
    // int cy=0,cw=0;
    
    // vi fs(128),ft(128);
    // for(char c:s) fs[c]++;
    // for(char c:t) ft[c]++;
    // for(int i=0; i<128; i++){
    //     int k = min(fs[i],ft[i]);
    //     cy+=k;
    //     fs[i]-=k;
    //     ft[i]-=k;
    // }
    // for(int i=0; i<26; i++) cw+=min(fs['A'+i]+fs['a'+i],ft['A'+i]+ft['a'+i]);
    // cout<<cy<<" "<<cw<<endl;

    // vi su(26),sl(26),tu(26),tl(26);
    // for(char c:s) (c>='a')?sl[c-'a']++:su[c-'A']++;
    // for(char c:t) (c>='a')?tl[c-'a']++:tu[c-'A']++;
    // int cy=0,cw=0;
    // deb(sl)deb(su)deb(tl)deb(tu)
    // for(int i=0; i<26; i++){
    //     if(sl[i]<=tl[i] && sl[i]!=0) {cy+=sl[i];sl[i]=0;tl[i]=0;}
    //     else{sl[i]-=tl[i];cy+=tl[i];tl[i]=0;}
    //     if(su[i]<=tu[i] && su[i]!=0) {cy+=su[i];su[i]=0;tu[i]=0;}
    //     else{su[i]-=tu[i];cy+=tu[i];tu[i]=0;}
    // }
    // deb(sl)deb(su)deb(tl)deb(tu)
    // for(int i=0; i<26; i++){
    //     cw+=min(sl[i],tu[i]);
    //     cw+=min(su[i],tl[i]);
    // }
    // cout<<cy<<" "<<cw<<endl;
}
int32_t main(){
    IOS
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*
aabc
AABC
*/