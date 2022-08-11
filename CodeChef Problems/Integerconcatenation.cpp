#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        unsigned long long int l, r;
        cin >> n;
        cin >> l >> r;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                string b = a[i] + a[j];
                unsigned long long int x = stoi(b);
                if (x >= l && x <= r)
                {
                    count++;
                }
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                string c = a[i] + a[j];
                unsigned long long int y = stoi(c);
                if (y >= l && y <= r && a[i] != a[j])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}