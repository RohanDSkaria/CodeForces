#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define vl v<ll>
#define vb v<bool>
#define vvi v<v<int>>
#define vvl v<v<ll>>
#define bl cout<<endl
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(x) cout << #x << ": " << x << endl;
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
vb primes(int n){vb A(n+1,1);for(int i=2; i*i<=n; i++){if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=0;}return A;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve()
{
    int n;cin>>n;
    string k;cin>>k;
    string ans="";
    int sum=0;
    for(char c:k) sum+=(c-'0');
    int c=0;
    for(int i=n-1; i>=0; i--)
    {
        ans += (char)((sum+c)%10+'0');
        c=(sum+c)/10;
        sum-=(k[i]-'0');
    } 
    if(c!=0) ans+=(char)(c+'0');
    ans=string(rall(ans));
    int i=0;
    while(ans[i]=='0') i++;
    ans=string(ans.begin()+i,ans.end());
    cout<<ans<<endl;
}
int main(){
    IOS
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
/*
s=18
c=0
v=8
ans=8
c=1
s=9
v=0
ans=08
c=1
sum=0
*/