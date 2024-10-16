#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int K, N;
        cin >> N >> K;
        vector<int>ai(N);
        int sum = 0;
        for(int i = 0; i < N; i++)
        {
            cin >> ai[i];
        }
        int current_sum = 0;
        for (int i = 0; i < K; i++) {
            current_sum += ai[i];
        }
        int max_sum = current_sum;
        for (int i = K; i < N; i++) {
            current_sum += ai[i] - ai[i - K];
            max_sum = max(max_sum, current_sum); 
        }
        cout << max_sum << "\n";
    }
}