#include <iostream>

using namespace std;
long long factorial_mod(int n, long long mod)
{
     if (n == 2 || n == 1)
        return (n);        
    long long ans = 1; 
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * i);
        if (ans >  mod)
            ans %= mod;
    }
    return (ans);
}
long long factorial_exp(long long a, long long b, long long mod)
{
    long long ans = 1;

     if (a == 0 && b == 0){
          return (1);
    }else{
        a = a % mod;
        while(b > 0)
        {
            if (b % 2)
                ans = (ans * a) % mod;
            b = b >> 1;
            a = (a * a) % mod ;
        }
       return (ans);
    }
}
int main()
{
    int n ;
    cin>> n;
    long long mod = 1000000007;
    while(n > 0 && n--)
    {
        int a, b;
        cin>> a>>b;
        long long r1 = factorial_mod(a, mod);
        long long r2 = factorial_mod(b, mod);
        long long r3 = factorial_mod(a - b, mod);
        long ans = (r1 * factorial_exp(r2, mod-2, mod) % mod * factorial_exp(r3, mod-2 ,mod) % mod )% mod;
        cout << ans << "\n";
    }
}