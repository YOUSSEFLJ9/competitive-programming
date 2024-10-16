#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, size_t>mp;

    int l =0;
    while(n>l)
    {
        string name;
        cin >> name;
        mp[name]++;
        l++;
    }
    size_t max = 0;
    string max_key;
    for(auto &ans: mp)
    {
        if (ans.second > max)
        {
            max_key = ans.first;
            max = ans.second;
        }
        if (ans.second == max)
        {
            if (ans.first > max_key)
            {
                max_key = ans.first;
                max = ans.second; 
            }
        }
    }
    cout << max_key << " "<< max<< "\n";
}
