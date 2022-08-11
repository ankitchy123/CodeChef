#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n, d, h, sum = 0;
        cout << "Enter n, d & h : ";
        cin >> n >> d >> h;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter a[" << i << "] : ";
            cin >> a[i];
            if (a[i] == 0)
            {
                if (sum < d)
                {
                    sum = 0;
                }
                else
                {
                    sum = sum - d;
                }
            }
            if (a[i] > 0)
            {
                sum += a[i];
            }
            if (sum == h)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (sum < h)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}