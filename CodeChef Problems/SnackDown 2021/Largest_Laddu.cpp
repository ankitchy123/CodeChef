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
        int x = pow(2, n);
        int a[x];
        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }
        sort(a, a + x);
        int min = a[0];
        int max = a[x - 1];
        if (max - min <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}