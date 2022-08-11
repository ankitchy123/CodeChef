#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cout << "Enter T : ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, p, K, days = 0;
        cout << "Enter N, p & K : ";
        cin >> N >> p >> K;

        int x = (p % K);
        int y = (N - 1) - (((N - 1) / K) * K);
        if (x > y)
        {
            days += ((y + 1) * (((N - 1) / K) + 1) + (x - 1 - y) * ((N - 1) / K));
        }
        else
        {
            days += (x * (((N - 1) / K) + 1));
        }

        for (int i = x; i <= N - 1; i = i + K)
        {
            days++;

            if (i == p)
            {
                break;
            }
        }
        cout << days << endl;
    }
    return 0;
}