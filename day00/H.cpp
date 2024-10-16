#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;

int main()
{
    int n = 5;
    cin >> n;
    vector<long long>v(n);
  
    for(long long i = 0; i < n ; i++) cin >> v[i];
    sort(v.begin(), v.end());
    long long sumT = accumulate(v.begin(), v.end(), 0LL);
    long long sumB = v[n - 1];
    long long sumA = sumT - sumB;
    long long tmp  = abs(sumB - sumA);
    int i =0;
    while (i <= n / 2 )
    {
        sumB += v[i];
        sumA -= v[i];
        long long currdef = abs(sumB - sumA);
        if (tmp > currdef)
            tmp = currdef;
        else
            break;
        i++;
    }
    cout << tmp << "\n";
}