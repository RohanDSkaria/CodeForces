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

string solve(){
    int n;cin>>n;
    int sum=0;
    v A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
        sum+=A[i];
    }
    int k = sum/n;
    for(int i=0; i<n-1; i++){
        if(A[i]<k) return "NO";
        if(A[i]==k) continue;
        else A[i+1]+=(A[i]-k);
    }
    return "YES";
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}