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
    string s="aba";
    for(int i=1; i<27; i++){
        for(int j=1; j<27; j++){
            for(int k=1; k<27; k++){
                if((i+j+k)==n){
                    s[0]=char(96+i);
                    s[1]=char(96+j);
                    s[2]=char(96+k);
                    return s;
                }
            }
        }
    }
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
}