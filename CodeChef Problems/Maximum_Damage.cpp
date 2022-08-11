#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << (a[0] & a[1]) << " ";

        for (ll i = 1; i < n - 1; i++)
        {
            cout << max((a[i] & a[i - 1]), (a[i] & a[i + 1])) << " ";
        }

        cout << (a[n - 1] & a[n - 2]) << endl;
    }
    return 0;
}