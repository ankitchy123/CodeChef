#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll factorial(ll n)
{
    ll fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        ll n;
        cout << "Enter n : ";
        cin >> n;
        ll a[n], sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cout << "Enter a[" << i << "] : ";
            cin >> a[i];
        }
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    sum += 2;
                }
            }
        }
        cout << (n * (n - 1)) - sum << endl;
    }
    return 0;
}