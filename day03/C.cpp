#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin>> n;

    while(n--)
    {
        long long a,b, mod, ans = 1;
        cin>>a >> b;
        if (a == 0 && b == 0){
            cout<< 1<< "\n";
    }else{
        mod = 1000000007;
        a = a % mod;
        while(b > 0)
        {
            if (b % 2)
                ans = (ans * a) % mod;
            b = b >> 1;
            a = (a * a) % mod ;
        }
       cout << ans << "\n";
    }
    }
}