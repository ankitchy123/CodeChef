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
        if (n % 2 != 0)
        {
            int x = n / 2;
            int j = 1, count = 0;
            for (int i = n; i > n - x; i--)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
                j++;
            }
            if (count == x)
            {
                int f = 0;
                for (int i = 1; i <= x; i++)
                {
                    if (a[i] != a[i + 1] && a[i] + 1 == a[i + 1])
                    {
                        f++;
                    }
                }
                if (f == 6)
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no" << endl;
                }
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else
        {
            int x = n / 2;
            int j = 1, count = 0;
            for (int i = n; i > x; i--)
            {
                if (a[i] == a[j])
                {
                    count++;
                }
                j++;
            }
            if (count == x)
            {
                int f = 0;
                for (int i = 1; i <= x - 1; i++)
                {
                    if (a[i] != a[i + 1] && a[i] + 1 == a[i + 1])
                    {
                        f++;
                    }
                }
                if (f == 6)
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no" << endl;
                }
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}