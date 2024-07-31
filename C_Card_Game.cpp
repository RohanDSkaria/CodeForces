// https://codeforces.com/problemset/problem/1739/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define pii pair<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

int m=998244353;
int nCr(int n, int r){
    if(n==r) return 1;
    int ans=1;
    for(int i=0; i<r; i++){
        ans*=(n-i);
        ans/=(i+1);
        ans%=m;
    }
    return ans;
}

v<vi> dp(61, vi(2));

void solve(){
    dp[2][0]=1;dp[2][1]=0;
    for(int i=4; i<61; i+=2){
        dp[i][0]=(dp[i-2][1]+nCr(i-1,i/2))%m;
        dp[i][1]=(dp[i-2][0]+nCr(i-2,i/2))%m;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    solve();
    while(t--){
        int n;cin>>n;
        cout<<dp[n]<<1<<endl;
    }
}
/*
1 2
1
2

(n-2)*(n-1)
2
1

1 2 3 4 5 6
2 3 6
1 4 5

1 2 6
1 3 6
1 4 6
1 5 6
2 3 6
2 4 6
2 5 6
3 4 6
3 5 6
4 5 6

1 2 3 4
1 4
2 4
3 4


1 2 3 4 5 6 7 8
1 4 5 8
2 3 6 7

*/