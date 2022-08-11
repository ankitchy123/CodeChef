#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll sum = 1;

        cout << "1 ";
        for (int i = 1; i < n; i++)
        {
            cout << i << " ";
            sum += i;
        }
        ll ans = pow(2, n);
        cout << ans - sum << endl;
    }
    return 0;
}