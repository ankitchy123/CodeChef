#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, sum = 0;
    cout << "Enter N : ";
    cin >> N;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            sum = sum + i;
        }
        if (sum == N)
        {
            break;
        }
    }
    if (sum == N)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}