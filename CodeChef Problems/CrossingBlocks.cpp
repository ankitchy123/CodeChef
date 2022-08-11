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
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter a : ";
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] >= a[j])
                {
                    if (a[i] >= a[j + 1])
                    {
                        for (int k = i + 1; k < j; k++)
                        {
                            if (a[k] <= a[j])
                            {
                            }
                        }
                    }

                    else
                    {
                        sum++;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        if (sum == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}