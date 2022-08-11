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
        int a[n - 1], b[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i] >> b[i];
        }
        int s[n];
        int count = 0;
        int min = INT_MAX;
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
            if (s[i] < 0)
            {
                count++;
                if (s[i] < min)
                {
                    min = s[i];
                }
            }
            ans *= s[i];
        }
        if (count % 2 == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << (ans / min) << endl;
        }
    }

    return 0;
}