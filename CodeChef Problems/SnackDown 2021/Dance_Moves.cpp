#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        if (y > x)
        {
            int a = y - x;
            ans += a / 2;
            if (a % 2 == 1)
            {
                ans += 2;
            }
        }
        else
        {
            ans = x - y;
        }
        cout << ans << endl;
    }
    return 0;
}