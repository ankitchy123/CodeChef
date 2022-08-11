#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll d1, d2;
        ll l = 1, r = n - 2;
        ll ans1 = 0, ans2 = 0;
        ll ans = INT_MAX;
        int a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (n == 3)
        {
            ll y = min((a[1] - a[0]), a[2] - a[1]);
            cout << y << endl;
        }
        else if (n == 2)
        {
            cout << "0" << endl;
        }
        else
        {
            // 1 5 7 8 10
            // ans1 = 9
            // ans2 = 6
            // ans = 6
            // l = 1, r = n -2,   d2 = 5, d1 = 7  , ans = 2
            // l = 2, r = n - 3,  d2 = 5, d1 = 6,  ans = 1

            for (ll i = 0; i < n - 1; i++)
            {
                ans1 += abs(a[i] - a[(n - 1) / 2]);
            }
            for (ll i = 1; i < n; i++)
            {
                ans2 += abs(a[i] - a[1 + (n - 1) / 2]);
            }
            ans = min(ans1, ans2);

            while (l < r)
            {
                d2 = a[n - 1] - a[l];
                d1 = a[r] - a[0];

                ans = min(ans, abs(d1 - d2));
                if (d1 < d2)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}