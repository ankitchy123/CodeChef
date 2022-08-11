#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter n : ";
        cin >> n;
        int a[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter a : ";
            cin >> a[i];
        }
        if (n == 1)
        {
            count = 1;
        }

        int val;
        for (int i = 0; i < n; i++)
        {
            val = a[0] * a[1];
            if (val == a[i])
            {
                count = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            val = a[n - 1] * a[n - 2];
            if (val == a[i])
            {
                count = 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            val = a[0] * a[n - 1];
            if (val == a[i])
            {
                count = 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}