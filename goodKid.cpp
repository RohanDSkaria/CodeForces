#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long> A(n);
        for(int i=0; i<n; i++) cin>>A[i];
        int min=A[0];
        for(int i:A) if(i<min) min=i;
        for(int i=0; i<n; i++){
            if(A[i]==min){
                A[i]++;
                break;
            }
        }
        int ans=1;
        for(int i:A) ans *= i;
        cout<<ans<<endl;
    }
    return 0;
}