#include <iostream>
#include <string>


using namespace std;
int main()
{
    int fst = 0;
    cin >> fst;

   int v[100];
    for (int i = 0 ; (i < fst && i < 101); i++)
    {
        cin >> v[i];
    }
    int m = 0 ;
    cin >> m;
    int v2[100];
    for (int i = 0 ; (i < m && i < 101); i++)
    {
        cin >> v2[i];
    }
    int rt[100];
    int count = 0;
    for (int i = 0 ; i < fst ; i++)
    {
        for(int j = 0; j < m ; j++)
        {
            if (v[i] == v2[j])
                break;
            else if (j + 1 == m)
            rt[count++] = v[i];
        }
    }
    cout << count << endl;
    for (int i = 0 ; i < count; i++)
        cout << rt[i] << " ";
    cout <<endl;
}