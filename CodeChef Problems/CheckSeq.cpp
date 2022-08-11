#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool ans = true;
    int count = 0, count1 = 0;
    if (a[1] > a[2])
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                ans = true;
                count++;
            }
            else if (a[i] < a[i + 1])
            {
                break;
            }
            else
            {
                ans = false;
                break;
            }
        }
        for (int i = (count + 2); i <= n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    if (a[1] < a[2])
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                ans = true;
                count++;
            }
            else if (a[i] > a[i + 1])
            {
                break;
            }
            else
            {
                ans = false;
                break;
            }
        }
        for (int i = (count + 2); i <= n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (ans == 1)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    return 0;
}