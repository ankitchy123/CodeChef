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
        int w[n];
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter w : ";
            cin >> w[i];
        }
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            if ((i + 1) - (i) != w[i + 1] - w[i])
            {
                sum++;
            }
        }
        cout << n - sum << endl;
    }
    return 0;
}