#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n;
        //cout << "Enter n : ";
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++)
        {
            //cout << "Enter a : ";
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            //cout << "Enter b : ";
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + (n - 1));
        int ans = 0;
        if (n == 2)
        {
            ans = b[0] - a[0];
            if (b[0] - a[1] < ans && b[0] - a[1] > 0 || ans <= 0)
            {
                ans = b[0] - a[1];
            }
        }
        else
        {
            int sum1 = b[0] - a[0];
            int sum2 = b[1] - a[1];
            int sum3 = b[2] - a[2];
            int altsum1 = b[1] - a[2];
            int altsum2 = b[0] - a[1];

            if (sum1 == sum2 || altsum1 == sum1)
            {
                ans = sum1;
            }
            else if (altsum1 == altsum2)
            {
                ans = altsum2;
            }
            else if (sum1 == sum2 && (altsum1 == altsum2 && b[n - 2] > a[n - 1]))
            {
                if (sum1 < altsum2)
                {
                    ans = sum1;
                }
                else if (altsum2 < sum1)
                {
                    ans = altsum2;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}