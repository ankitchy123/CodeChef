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
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            // if (i - a[i] > 0)
            // {
            //     count++;
            // }

            if (a[i] == i)
            {

                count += n + 1 - i;
            }
            if (i >= 2)
            {
            }
        }
        cout << count << endl;
    }

    return 0;
}