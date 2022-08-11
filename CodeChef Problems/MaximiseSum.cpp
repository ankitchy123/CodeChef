#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0, count = 0;
        //cout << "Enter n & k : ";
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            //cout << "Enter a : ";
            cin >> a[i];
            if (a[i] > 0)
            {
                sum += a[i];
            }
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (count == k)
            {
                break;
            }
            if (a[i] < 0)
            {
                a[i] = -1 * a[i];
                sum += a[i];
                count++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}