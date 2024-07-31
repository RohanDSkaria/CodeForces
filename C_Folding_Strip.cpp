#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long 
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define p pair
#define pii p<int,int>
#define yes {cout<<"YES"<<endl;return;}
#define no {cout<<"NO"<<endl;return;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

void solve()
{
    int n,k=0,m=0,M=0;cin>>n;
    string s;cin>>s;
    vector<int> v;
    for (int i = 1, j = 0; i <= n; i++) 
    {
        if (i == n || s[i] == s[i - 1]) 
        {
            v.push_back(i - j);
            j = i;
        }
    }
    cout << v << endl;
     int L = 0, R = 0, cur = 0;
    for (int i = 0; i < v.size(); i++) 
    {
        if (i % 2) {
            cur += v[i];
        } else {
            cur -= v[i];
        }
        L = min(L, cur);
        R = max(R, cur);
    }
    
    cout << R - L << "\n";

    for(char c:s){
        (!((k&1)^(c=='1')))?k++:k--;
        m=min(m,k);
        M=max(M,k);
    }
    cout<<M-m<<endl;
    bl 
    bl
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/