#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define pb(a) push_back(a)
#define pv(A) for(int i:A) cout<<i<<" "
#define pr(A) for(int i=A.size()-1; i>=0; i--) cout<<A[i]
#define v vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define bl cout<<endl
using namespace std;
int some(v& A){int a=0;for(int i:A){a+=i;} return a;}
int nCr(int n, int r){if(r>n) return 0;if(n==r) return 1;int ans=1;for(int i=0; i<r; i++){ans*=(n-i);ans/=i+1;}return ans;}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        v A(n);
        ll sum=0;
        for(int i=0; i<n; i++){
            cin>>A[i];
            sum+=A[i];
        }
        if(sum%n!=0) cout<<-1<<endl;
        else{
            ll k=sum/n;
            int c=0;
            ll g=0;
            for(int i=0; i<n-1; i++){
                g+=A[i];
                if(g!=k*(i+1)) c++;
            }
            cout<<c<<endl;
        }
    }
}