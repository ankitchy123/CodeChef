#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, k;
    cin >> n >> x >> k;
    int c[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    int p[n][x];
    int mincolor[n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            cin >> p[i][j];
            mincolor[i] = min(mincolor[i], p[i][j]);
        }
    }

    int ans = (n - k + 1) * mincolor[1];
    for (int i = 2; i <= n; i++)
    {
        ans += mincolor[i];
    }
    cout << ans << endl;

    return 0;
}