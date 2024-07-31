// https://codeforces.com/problemset/problem/3/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vll v<ll>
#define vb v<bool>
#define vs v<string>
#define vc v<char>
#define vvi v<vi>
#define vvll v<vll>
#define vvc v<vc>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << " : " << x << endl;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii v<pii>
#define vpll v<pll>
#define fi first
#define se second
#define um unordered_map
#define us unordered_set
#define usi us<int>
#define usll us<ll>
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb sieve(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
// map<ll,ll> dp;
// ll f(ll n){if(dp.count(n)) return dp[n];ll k=n/2;if(n&1) return dp[n] = (f(k)*f(k+1) + f(k-1)*f(k));else return dp[n] = (f(k)*f(k) + f(k-1)*f(k-1));}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}
int checkrow(vvc& A, int r){
    if(A[r][0]==A[r][1] && A[r][1]==A[r][2] && A[r][2]!='.') return (int)(A[r][1]);
    return -6;
}
int checkcol(vvc& A, int c){
    if(A[0][c]==A[1][c] && A[1][c]==A[2][c] && A[2][c]!='.') return (int)(A[0][c]);
    return -6;
}
int checkdia(vvc& A){
    if(A[0][0]==A[1][1] && A[1][1]==A[2][2] && A[1][1]!='.') return (int)(A[1][1]);
    if(A[0][2]==A[1][1] && A[1][1]==A[2][0] && A[1][1]!='.') return (int)(A[1][1]);
    return -6;
}
int check(vvc& A){
    int x=0,O=0,rowX,rowO,colX,colO;
    for(int i=0; i<3; i++){
        int k = checkrow(A,i);
        int g = checkcol(A,i);
        // cout<<i<<"$ "<<k<<"% "<<g<<endl;
        if(k==48) O++,rowO=i;
        else if(k==88) x++,rowX=i;
        if(g==48) O++,colO=i;
        else if(g==88) x++,colX=i;
        if(k==48 && g==48) O--;
        if(k==88 && g==88) x--;
    }
    if(abs(rowX-colX)==2) x--;
    if(abs(rowO-colO)==2) O--; 
    int h = checkdia(A);
    if(h==48 && O>=1) O--;
    if(h==88 && x>=1) x--;
    if(h==48) O++;
    else if(h==88) x++;
    if(x>=1 && O>=1) return -6;
    if(x==1 && O==0) return 88;
    if(x==0 && O==1) return 48;
    return -1;
}
void solve(){
    vvc A(3,vc(3));cin>>A;
    int cntD=0,cntX=0,cnt0=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            char c=A[i][j];
            if(c=='.') cntD++;
            if(c=='X') cntX++;
            if(c=='0') cnt0++;
        }
    }
    if(cnt0>cntX || cntX-cnt0>1){cout<<"illegal";return;}
    int winner=check(A);
    if(winner==-6){cout<<"illegal";return;}
    // cout<<winner<<" winner"<<endl;
    // if(cntX==cnt0 && winner!=-1){cout<<"illegal";return;}
    if(winner!=-1){(char(winner)=='X')?((cnt0==cntD)?(cout<<"illegal"):(cout<<"the first player won")):(cnt0==cntX)?(cout<<"the second player won"):(cout<<"illegal");return;}
    if(cntD==0){cout<<"draw";return;}
    (cntX==cnt0)?(cout<<"first"):(cout<<"second");
}
int main(){
    IOS
    //dp[0]=dp[1]=1;
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/