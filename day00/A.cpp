#include <iostream>
#include <string.h>


using namespace std;
int main()
{
    int arr[100];
    int count = 0;

    cin >> count;
    for(int i = 0; (i < count && count < 101); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ;(i < count && count < 101); i++)
    {
        if (arr[i] > -1)
            cout << arr[i] + 2 << " ";
        else
            cout << arr[i] << " ";
    }
    cout << endl;
    return (0);
}