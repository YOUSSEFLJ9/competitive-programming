#include <iostream>

using namespace std;

int main()
{
    string line;

    cin >> line;
    int i =0;
    int A = 0, B = 0;
    while(line[i])
    {
        if (line[i] == 'A')
        {
            i++;
            A += line[i++] - '0';
        }
        else if (line[i] == 'B')
        {
            i++;
            B += line[i++] - '0';
        }
        if (A >= 11 && A - B >= 2)
        {
                cout << "A\n";
                return 0;
        }
        else if (B >= 11 && B - A >= 2)
        {
            cout << "B\n";
            return 0; 
        }  
    }
}