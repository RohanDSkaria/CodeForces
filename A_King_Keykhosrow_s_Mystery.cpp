#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long

void solve(){
    int a,b;cin>>a>>b;
    for(int i=min(a,b); ; i++){
        if(i%a==i%b){
            cout<<i<<endl;
            return;
        }
        // if(i==999000) return;
    }
}
int32_t main(){
    IOS int t=1;
    auto start = chrono::high_resolution_clock::now();
    cin>>t;
    while(t--) solve();
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Execution time: " << duration.count() << " seconds\n";
}
/*

*/