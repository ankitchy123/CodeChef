#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, v;
        cin >> n >> v;
        ll max = (n * (n - 1)) / 2, min = 0;
        if (v == 1)
        {
            min = max;
            cout << max << " " << min << endl;
            continue;
        }
        if (v >= n - 1)
        {
            min = n - 1;
        }
        else
        {
            min = v + (((n - v) * (n - v + 1)) / 2) - 1;
        }
        cout << max << " " << min << endl;
    }

    return 0;
}