#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //cout << "Enter t : ";
    cin >> t;
    while (t--)
    {
        int n, k, s, sum = 0, count = 0;
        //cout << "Enter n, k & s : ";
        cin >> n >> k >> s;
        for (int i = 1; i <= 2 * n; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
                count++;
            }
        }
        int x = s - sum;
        int ans = x / (n + k - 1 - count);
        cout << ans << endl;
    }
    return 0;
}