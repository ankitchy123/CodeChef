#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x, y;
        cin >> n >> p >> x >> y;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 1; i <= p; i++)
        {
            if (a[i] == 0)
            {
                sum += x;
            }
            else if (a[i] == 1)
            {
                sum += y;
            }
        }
        cout << sum << endl;
    }

    return 0;
}