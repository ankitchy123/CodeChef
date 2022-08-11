#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            sum += (a[i] - a[i + 1]) * (a[i + 1] - a[i + 2]);
            int j = i + 2, k = i + 3;
            while (k <= n)
            {
                sum += (a[i] - a[j]) * (a[j] - a[k]);
                j++;
                k++;
            }
        }

        cout << sum << endl;
    }
    return 0;
}