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
        int a, b;
        for (int i = 2; i <= n; i++)
        {
            a = n + i;
            b = i;
            int counta = 0, countb = 0;
            for (int j = 2; j < a; j++)
            {
                if (a % j == 0)
                {
                    continue;
                }
                else
                {
                    counta++;
                }
            }
            for (int j = 2; j < b; j++)
            {
                if (b % j == 0)
                {
                    continue;
                }
                else
                {
                    countb++;
                }
            }
            if (counta == countb)
            {
                cout << a << " " << b << endl;
                break;
            }
            else
            {
                i++;
                continue;
            }
        }
    }
    return 0;
}