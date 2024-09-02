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

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    vi m1(26),m2(26);
    for(int i=0; i<n; i++){
        if(i&1) m2[s[i]-'a']++;
        else m1[s[i]-'a']++;
    }
    if(n&1){
        vi k1(26),k2(26);
        int ans=n+1;
        for(int i=0; i<n; i++){
            vi t1=m2,t2=m1;
            if(i&1) t1[s[i]-'a']--;
            else t2[s[i]-'a']--;
            for(int j=0; j<26; j++){
                t2[j]-=k1[j];
                t1[j]-=k2[j];
                t2[j]+=k2[j];
                t1[j]+=k1[j];
            }
            int k3=*max_element(all(t1));
            int k4=*max_element(all(t2));
            if(i&1) k2[s[i]-'a']++;
            else k1[s[i]-'a']++;
            ans=min(n-k3-k4,ans);
        }
        cout<<ans<<endl;
    }
    else{
        int k1=*max_element(all(m1));
        int k2=*max_element(all(m2));
        cout<<(n-k1-k2)<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/