#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int points = 0;
        if (a + b > a && a + b > b)
        {
            int x = 2;
            while (n > 1)
            {
                if (n % x == 0)
                {
                    n = n / x;
                    if (x % 2 == 0)
                    {
                        points += a;
                    }
                    else
                    {
                        points += b;
                    }
                }
                else
                {
                    x++;
                }
            }
        }
        else
        {
            int x = n;
            while (n > 1)
            {
                if (n % x == 0)
                {
                    n = n / x;
                    if (x % 2 == 0)
                    {
                        points += a;
                    }
                    else
                    {
                        points += b;
                    }
                }
                else
                {
                    x--;
                }
            }
        }
        cout << points << endl;
    }
    return 0;
}