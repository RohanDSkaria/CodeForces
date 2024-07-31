#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,a,b; cin>>n>>a>>b;
        char c = ' ';
        if(b<n/2 || a>n/2+1){
            cout<<-1<<endl;
            continue;
        }
        if(n-b>a){
            cout<<-1<<endl;
            continue;
        }
        string l,r;
        for(int i=1; i<=n; i++){
            if(i<a || i==b) r+=to_string(i)+c;
            else if(i>b || i==a) l+=to_string(i)+c;
            else l+=to_string(i)+c;
        }
        cout<<l+r<<endl;
    }
    return 0;
}