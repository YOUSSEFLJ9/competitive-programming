#include <iostream>

using namespace std;

int main()
{
    long long n ;

    cin >> n;

    long long i = 3;

    if (n == 2)
    {
        cout << "\"Prime\"\n";
        return 0;
    }
    if (n < 2 || n % 2 == 0)
    {
       cout << "\"Not Prime\"\n";
        return 0;
    }
    while(i * i <= n)
    {
        if ( n % i == 0)
        {
            cout << "\"Not Prime\"\n";
            return (0);
        }
        i += 1;
    }
     cout << "\"Prime\"\n";
    return (0);
}