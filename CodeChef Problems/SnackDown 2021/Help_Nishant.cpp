#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;

        ll count = 0;
        ll low = 1, high = k;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            if ((mid * (mid + 1) / 2) == k)
            {
                count = mid;
                break;
            }
            if ((mid * (mid + 1) / 2) > k)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (count == 0)
        {
            count = low;
        }
        cout << count * 2 << endl;
    }
    return 0;
}