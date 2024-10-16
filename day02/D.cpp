#include <iostream>
#include <vector>

using namespace std;
void sort_(vector<long long> v, int i , int n ,int k)
{
   
    

}
int main ()
{
    int n,k;
    cin >> n>>k;
    vector<long long>v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];
    for (int i = k; i < n; i++)
    {
        sort_(v ,i ,n ,k);
    }
}