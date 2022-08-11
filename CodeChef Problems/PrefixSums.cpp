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
        if (n % 4 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n / 2; i++)
            {
                if (i % 2 == 1)
                {
                    cout << i << " ";
                }
            }
            for (int i = n / 2 + 2; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
            for (int i = 2; i <= n / 2; i++)
            {
                if (i % 2 == 0)
                {
                    cout << i << " ";
                }
            }
            for (int i = n / 2 + 1; i < n; i++)
            {
                if (i % 2 == 1)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}