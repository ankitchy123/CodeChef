#include <bits/stdc++.h>
using namespace std;

int ans1(int n, int i)
{
    int x = 0;
    while (n)
    {
        x += n % i;
        n = n / i;
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, i;
        cin >> n >> l >> r;
        int ans = INT_MAX;
        int base = l;

        if (n >= l && n <= r)
        {
            cout << n << endl;
        }
        else
        {
            int a = n / r;
            for (int i = r; i >= l; i = n / a)
            {
                ++a;
                if (ans1(n, i) == 1)
                {
                    base = i;
                    break;
                }
                if (i == n / a)
                {
                    a = n / i;
                    continue;
                }
                int temp = ans1(n, i);

                if (temp < ans)
                {
                    ans = temp;
                    base = i;
                }
            }

            cout << base << endl;
        }
    }
    return 0;
}