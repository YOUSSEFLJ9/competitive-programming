#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long>v(n);
    for(int i = 0;  i < n ; i++)
    {
        cin >> v[i];
        if (i != 0)
            v[i] += v[i - 1];
    }
    int k = 0;
    unordered_map<long long, int>cnt;
    cnt[0] =1;

    for(int i = 0; i < n ; i++)
    {
        long long target = v[i] -n;
        if (cnt.find(target) != cnt.end())
            k += cnt[target];
        cnt[v[i]]++;
    }
    cout<< k<<"\n";
    return (0)
}