#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m,n;cin>>m>>n;
    float ans=0;
    for(float i=1; i<=m; i++) ans+=i*(pow(i/m,n)-pow((i-1)/m,n));
    cout<<ans;
}