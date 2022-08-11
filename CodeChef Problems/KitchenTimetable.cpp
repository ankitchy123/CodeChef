#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1], b[n + 1];
        a[0] = 0, b[0] = 0;
        int sum = 0, count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] - a[i - 1] >= b[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}