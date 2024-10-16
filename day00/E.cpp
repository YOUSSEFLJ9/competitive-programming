#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    int h = 0;
    cin>>h;
    int ans = 0;
    while(n--)
    {
        int j = 0;
        cin >> j;
        if (j > h) ans+=2;
        else
            ans++;
    }
    cout <<ans<<"\n";
}