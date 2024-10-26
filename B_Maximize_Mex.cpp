#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define pb(a) push_back(a)
#define v vector
#define vi v<int>
#define bl cout<<endl;
#define all(a) a.begin(),a.end()
#define deb(x) cout<<#x<<" = "<<x<<endl;
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto& x : v)is >> x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto& x : v)os << x << ' ';return os;}

// void solve(){
//     int n,x;cin>>n>>x;
//     map<int,int> m;
//     for(int i=0; i<n; i++){
//         int a;cin>>a;
//         m[a]++;
//     }
//     for(int i=0; i<n; i++){
//         if(!m.count(i)){
//             cout<<i<<endl;
//             return;
//         }
//         if(m[i]>1) m[i+x]+=m[i]-1;
//     }
//     cout<<n<<endl;
// }
void solve() {
    int n, x; 
    cin >> n >> x;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    set<int> s1;
    for(int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            s1.insert(a[i]);
        }
    }
    int m1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if(!(s1.count(i))){
            m1 = min(m1, i);
        }
    }
    // sabmein +x
    set<int> s2;                   
    for (int v : s1) {
        s2.insert(v + x);
    }
    int m2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if(!(s2.count(i))){
            m2 = min(m2, i);
        }
    }
    cout << min(m1,m2) << endl;
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*
0 1 1 2 3 4
2 3 3 4 5 6
*/