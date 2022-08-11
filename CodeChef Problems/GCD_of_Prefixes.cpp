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
        int b[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        if (b[1] < b[2])
        {
            cout << -1 << endl;
            continue;
        }
    }

    return 0;
}