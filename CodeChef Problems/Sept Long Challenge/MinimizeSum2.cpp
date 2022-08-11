#include <bits/stdc++.h>
using namespace std;

int ans1(long int n, long int i)
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
        int n, r, i;
        cin >> n >> r;
        int ans = INT_MAX;
        int base = 2;

        for (i = 2; i <= min(2 + 90000, r); i++)
        {
            //     if (r >= n )
            //     {
            //         base = i;
            //         break;
            //     }
            //     else
            //     {
            int temp = ans1(n, i);
            if (temp < ans)
            {
                ans = temp;
                base = i;
            }
            //}
        }
        for (i = r; i >= max(r - 90000, 2); i--)
        {
            // if (r >= n)
            // {
            //     base = i;
            //     break;
            // }
            // else
            // {
            int temp = ans1(n, i);
            if (temp < ans)
            {
                ans = temp;
                base = i;
            }
            //}
        }

        cout << base << endl;
    }
    return 0;
}