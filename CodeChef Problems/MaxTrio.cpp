#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    unsigned long long int >> t;
    while (t--)
    {
        unsigned long long int n;
        cin >> n;
        unsigned long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        unsigned long long int ans = (a[n - 1] - a[0]) * a[n - 2];
        cout << ans << endl;
    }

    return 0;
}