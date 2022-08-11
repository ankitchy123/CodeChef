#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        int count[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            for (int j = 1; j <= m; j++)
            {
                if (s[i][j] == 1)
                {
                    count[i]++;
                }
            }
        }
        int ans = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            ans += (count[1] - s[1][j]);
        }
        sort(count, count + n);
        int prev = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            prev += m - count[i + 1];
            ans += count[i] * prev;
            for (int j = m - 1; j >= 0; j--)
            {
                ans += (count[i] - s[i][j]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}