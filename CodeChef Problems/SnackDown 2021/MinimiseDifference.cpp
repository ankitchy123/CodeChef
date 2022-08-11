#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll x[m], y[m];
        ll count[n];
        for (ll i = 1; i <= n; i++)
        {
            count[i] = 0;
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> x[i] >> y[i];
            count[y[i]]++;
        }
        sort(count + 1, count + n + 1);
        //cout << count[n - 1] << " " << count[0] << endl;
        ll ans = count[n] - count[1];
        cout << ans << endl;
        for (ll i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}