## Problem: [A. Number Theory](https://codeforces.com/gym/517983/problem/A)
<details>

<summary>Hint 1</summary>

```
Think of how you can use the sigma function below which gives the sum of divisors of n.
```
<font size="4">

$$
\sigma(n) = \left(1 + p_1 + p_1^2 + \ldots + p_1^{e_1}\right) \times \left(1 + p_2 + p_2^2 + \ldots + p_2^{e_2}\right) \times \ldots \times \left(1 + p_n + p_n^2 + \ldots + p_n^{e_n}\right)
$$

</font>

```
Here p_i is the i_th prime number of the prime factorization of n and e_i is the exponent of the i_th prime number.

```
</details>

<details>
<summary>Solution</summary>

```
To get the desired sum we just need to raise all the elements in the function to the power 69 as shown below:
```
<font size="4">

$$
\left(1 + p_1^{69} + p_1^{69*2} + \ldots + p_1^{69*e_1}\right) \times \left(1 + p_2^{69} + p_2^{69*2} + \ldots + p_2^{69*e_2}\right) \times \ldots \times \left(1 + p_n^{69} + p_n^{69*2} + \ldots + p_n^{69*e_n}\right)
$$

</font>

```
We can simplfy this using GP:
```
<font size="4">

$$ \prod_{i=1}^{n} \left( \frac{p_i^{69*(e_i+1)} - 1}{p_i^{69} - 1} \right) $$

</font>

</details>

<details>
<summary>Code</summary>

```cpp
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
```
</details>