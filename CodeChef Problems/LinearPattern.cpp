#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    int a[N];
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            int x = i / 2;
            a[i] = 2 * x;
        }
        else
        {
            int y = (i / 2) + 1;
            a[i] = 10 * y;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}