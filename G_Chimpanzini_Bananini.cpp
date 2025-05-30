#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define int long long
#define v vector
#define vi v<int>
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define deb(...) _print(#__VA_ARGS__, __VA_ARGS__);
template<typename F,typename S>ostream& operator<<(ostream& os,const pair<F,S>& p){return os<<"{"<<p.first<<","<<p.second<<"}";}
template<typename F,typename S>istream& operator>>(istream& is,pair<F,S>& p){return is>>p.first>>p.second;}
template<typename T>istream& operator>>(istream& is, v<T>& v){for(auto&x:v)is>>x;return is;}
template<typename T>ostream& operator<<(ostream& os, v<T>& v){for(auto&x:v)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, set<T>& s){for(auto&x:s)os<<x<<' ';return os;}
template<typename T>ostream& operator<<(ostream& os, v<v<T>>& v){os<<endl;for(auto&i:v)os<<i<<endl;return os;}
template<typename K,typename V>ostream& operator<<(ostream& os,map<K,V>& m){os<<endl;for(auto&[k,v]:m)os<<k<<" -> "<<v<<endl;return os;}
template<typename T,typename... Args>void _print(string s,T v,Args... args){size_t c=s.find(',');cout<<s.substr(0,c)<<" = "<<v<<endl;if constexpr(sizeof...(args)>0){_print(s.substr(c+1),args...);}}

void solve(){
    int q;cin>>q;
    deque<int> dq;
    int lr=0,sum=0;
    int rl=0,ya=0;
    while(q--){
        int x,k;cin>>x;
        if(x==1){
            if(ya){
                lr-=sum;
                lr+=dq.size()*dq.front();
                rl+=sum;
                rl-=dq.size()*dq.front();
                int a=dq.front();
                dq.pop_front();
                dq.push_back(a);
            }
            else{
                lr+=sum;
                lr-=dq.size()*dq.back();
                rl-=sum;
                rl+=dq.size()*dq.back();
                int a=dq.back();
                dq.pop_back();
                dq.push_front(a);
            }
        }
        else if(x==2) ya^=1;
        else{
            cin>>k;
            sum+=k;
            if(ya){
                dq.push_front(k);
                lr+=sum;
                rl+=k*dq.size();
            }
            else{
                dq.push_back(k);
                lr+=k*dq.size();
                rl+=sum;
            }
        }
        cout<<(ya?rl:lr)<<endl;
    }
}
int32_t main(){
    IOS int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/