#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], sum = 0;
        int b[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        if (k == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
        else
        {
            for (int j = 1; j <= k; j++)
            {
                for (int i = 1; i <= n; i++)
                {
                    if (b[i] > 0)
                    {
                        a[i - 1] += 1;
                        a[i + 1] += 1;
                        if (i == 1)
                        {
                            a[n] += 1;
                        }
                        else if (i == n)
                        {
                            a[1] += 1;
                        }
                    }
                }
                for (int i = 1; i <= n; i++)
                {
                    b[i] = a[i];
                }
            }
            for (int i = 1; i <= n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}