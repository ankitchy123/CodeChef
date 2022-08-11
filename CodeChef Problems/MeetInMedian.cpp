#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k;
        int a[n], arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            arr[i] = a[i];
        }
        sort(a, a + n);
        x = k / 2;
        if (k % 2 == 0)
        {
            x--;
        }
        cout << a[(n - k) + x] << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= a[n - k])
            {
                cout << arr[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}