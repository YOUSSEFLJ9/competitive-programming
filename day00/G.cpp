#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main()
{
    int n = 0;
    cin>> n;
    long nbr;
    cin>> nbr;
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v(n);
    map<long, int>mp;

    for(int i = 0; i < n; i++)
    {
        cin>> v[i];
        long hlf = nbr - v[i];
        if (mp.count(hlf))
        {
            cout << mp[hlf] + 1<< " " << i + 1 << "\n";
            exit(0);
        }
         mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE" << "\n";
}