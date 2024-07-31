#include <bits/stdc++.h>
using namespace std;
#define int long long 

int mod = 1e9 + 7;

int power(int x, int y, int m) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % m;
        y = y >> 1;
        x = (x * x) % m;
    }
    return res;
}

int modDiv(int a, int b, int m) {
    int inv = power(b, m-2, m);
    return (a * inv) % m;
}

int32_t main(){
    int n; cin >> n;
    int ans = 1;
    int k = 69;
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        int numerator = power(x, k*(y+1), mod) - 1;
        int denominator = power(x, k, mod) - 1;
        int b = modDiv(numerator, denominator, mod);
        ans = (ans * b) % mod;
    }
    cout << ans << endl;
}