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
        int s[n];
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> s[i];
        }
        sort(s + 1, s + n + 1, greater<int>());
        for (int i = 1; i <= k; i++)
        {
            count++;
        }
        for (int i = k; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}