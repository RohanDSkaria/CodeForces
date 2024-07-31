#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]<<" "
#define v vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vv vector<vector<int>>
#define vvl vector<vector<ll>>
#define bl cout<<endl
#define all(a) a.begin(),a.end()
using namespace std;
int some(v& A){int a=0;for(int i:A){a+=i;} return a;}
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=(i+1);}return ans;}
int cntSimL(v& A, int n){
    for(int i=0; i<n-1; i++){
        if(A[0]!=A[1]) return 0;
        if(A[i]!=A[i+1]) return i+1;
    }
    return n;
}
int cntSimR(v& A, int n){
    for(int i=n-1; i>0; i--){
        if(A[n-1]!=A[n-2]) return 0;
        if(A[i]!=A[i-1]) return n-i;
    }
    return n;
}
int solve(){
    int n;cin>>n;
    v A(n);
    for(int i=0; i<n; i++) cin>>A[i];
    int L = cntSimL(A,n);
    if(L==n) return 0;
    int R = cntSimR(A,n);
    if(A[0]!=A[n-1]){
        if(L==0&&R==0) return n-1;
        int k = max(L,R);
        return n-k;
    }
    if(A[0]==A[n-1]){
        if(L==0&&R==0) return n-2;
        else return n-(L+R);
    }
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}