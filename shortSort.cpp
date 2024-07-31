#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if((s[0]=='b' && s[1]=='c')||(s[0]=='c' && s[1]=='a')) cout<<"NO\n";
        else cout<<"YES"<<endl;
    }
    return 0;
}