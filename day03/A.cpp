#include <iostream>
#include <vector>

using namespace std;

long long factorial_mod(int n, int mod)
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

int main()
{
    int n ;

    cin >> n;
    if (n == 2 || n == 1)
    {
        cout << n << "\n";
        return (0);        
    }
    long long ans = 1; 
    for (int i = 1; i <= n; i++)
    {
        ans = (ans * i);
        if (ans >  998244353)
            ans %= 998244353;
    }
    cout << ans << "\n";
    return (0);
}
