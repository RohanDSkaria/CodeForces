// https://codeforces.com/contest/1971/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
// #define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi vector<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define p pair
#define pii p<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void swap(int i, string& s){
    char t=s[0];
    s[0]=s[i];
    s[i]=t;
}
void solve(){
    string s;cin>>s;
    char c=s[0];
    bool ya=1;
    for(int i=1; i<s.length(); i++){
        if(s[i]!=c){
            swap(i,s);
            ya=0;
            break;
        }
    }
    if(ya) no;
    cout<<"YES"<<endl<<s<<endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/