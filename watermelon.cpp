#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    int w;cin>>w;
    ((w&1)==0 && w!=2)?cout<<"YES":cout<<"NO";
    return 0;
}