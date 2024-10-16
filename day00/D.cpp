#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<size_t>st;
    int i = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>i;
    for(int j = 0; j < i; j++)
    {
        int m = 0;
        cin >> m;
        if (m == 1)
        {
            cin >> m;
            st.push(m);
        }
        else if(!st.empty() && m == 2)
            st.pop();
        else if (m == 3)
        {
            if (st.empty())
                cout <<"Empty!"<<"\n";
            else
                cout << st.top()<< "\n";
        }  
    }
}