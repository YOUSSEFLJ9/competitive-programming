#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void Coronavirus_Spread()
{
  int n;
  cin >> n;
  int arr[n];
  int max = 0;
  int min = n;
  for(int i = 0; i < n ; i++)
  {
        cin >> arr[i];
  }
    int tmp = 1;
  for (int i = 1; i  < n ; i++)
  {
    if (  arr[i] - arr[i - 1]  <= 2)
    {
        tmp++; 
    }
    else
    {
      if (tmp > max)
          max = tmp;
      if (tmp < min)
        min = tmp;        
      tmp = 1;
    }
  }
  if (max < tmp)
    max = tmp;
  if (tmp < min)
        min = tmp;
    
cout << min << " " << max<< "\n";
}

int main()
{

    int T;
    cin>> T;

    while(T--)
    {
        Coronavirus_Spread();

    }
    return (0);
}