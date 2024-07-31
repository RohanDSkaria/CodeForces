
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
long pS(long long n){
    long long k = sqrt(n);
    return (k*k==n)?k:-1;
}
bool isP(long long n){
    if(n==2) return true;
    if(n<2 || n%2==0) return 0;
    for(long long i=3; i*i<=n; i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n; cin>>n;
    vector<long long> A(n);
    for(int i=0; i<n; i++) cin>>A[i];
    for(long long i:A){
        long long k = pS(i);
        if(k!=-1 && isP(k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}